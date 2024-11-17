#include <Q2HX711.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//FOR LCD
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_I2C_ADDRESS 0x3C

Adafruit_SSD1306 screen(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

Q2HX711 hx711(A2, A3);
  //
  int sensorPin = A0;
  int sensor;
  const int buzzer = 9;
  const float CALIBRATION_FACTOR = 0.1;
  int avg_size = 10;

  //LED Pins
 
  int led1 = 2;
  int led2 = 3;
  int led3 = 4;
  int led4 = 5;
  int led5 = 6; 

  float R_0 = 10000.0; // known resistor value in [Ohms]
  float Vcc = 5.0;

void setup() {
  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);

  //Pin setup
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

} 

void display(){
}

void loop() {

  //LCD setup
  screen.begin(SSD1306_SWITCHCAPVCC, SCREEN_I2C_ADDRESS);
  screen.clearDisplay();
  screen.setTextSize(2);
  screen.setTextColor(WHITE);
  
  int force;
  int depth;
  force = map(sensor, 0, 1000, 0, 45); //mapped the max sensor force to max newtons that should be applied to infant
  depth = map(sensor, 0, 1000, 0, 4); //mapping the max sensor to max depth of 4 cm

  //force display
  screen.setCursor(0,0);
  screen.print("F: ");
  screen.display();

  screen.setCursor(30,0);
  screen.print(force);
  screen.display();

  screen.setCursor(60, 60);
  screen.print("N");
  screen.display();

//depth display
  screen.setCursor(0, 40);
  screen.print("D: ");
  screen.display();

  screen.setCursor(30, 40);
  screen.print(depth);
  screen.display();

  screen.setCursor(60, 40);
  screen.print("cm");
  screen.display();

  //sensors
  sensor = analogRead(sensorPin);
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(100);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(100); 

  if (sensor > 995){
    digitalWrite(led1, HIGH); //Green
    digitalWrite(led2, HIGH); //Green
    digitalWrite(led3, HIGH); //Yellow
    digitalWrite(led4, HIGH); //Yellow
    digitalWrite(led5, HIGH); //Red
    tone(buzzer, 5000); // Send 1KHz sound signal...
    delay(50);        // ...for 1 sec
  }
  else if (sensor > 985){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
  }
  else if (sensor > 975){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
  else if (sensor > 965){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
  else{
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
  }
  delay(200);
}