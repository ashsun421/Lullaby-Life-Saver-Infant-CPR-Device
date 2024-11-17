# Lullaby-Life-Saver-Infant-CPR-Device
Overview
The Lullaby LifeSaver (LLS) is an Arduino-based CPR support device designed to assist healthcare professionals in delivering effective and precise cardiopulmonary resuscitation (CPR) for infants. This lightweight, portable device provides real-time auditory and visual feedback on compression depth, force, and rhythm—critical factors for successful resuscitation. By leveraging sensors, LEDs, an OLED display, and a buzzer, the LLS ensures that compressions meet the delicate physiological needs of newborns.

Features
Real-Time Feedback:

Displays compression depth (cm) and force (N) on an OLED screen.
A five-LED array provides intuitive visual guidance on compression quality.
Buzzer alerts for improper compressions and offers rhythm guidance.
Key Metrics:

Compression depth between 3.8–5.1 cm.
The compression force threshold is around 40 N.
Seamless Design:

Compact and user-friendly design for integration into first-aid kits.
Hidden wiring for professional presentation and ease of use.
Components
Arduino Mini: Core microcontroller for processing sensor data and driving outputs.
ZD10-100 Force Sensing Sensor: Measures real-time compression force.
128x32 OLED Display: Provides visual feedback on depth and force.
LEDs: Five-LED array for visual compression status.
16 Ohm Buzzer: Audio guidance and alerts.
Power Bank: Portable power supply for standalone operation.
Technical Implementation
Sensors: The force-sensing strip reads compression force and is calibrated to translate analog values to Newtons.
Display: OLED screen maps sensor readings to real-time feedback for force (N) and depth (cm).
Feedback:
LEDs light up progressively based on compression quality.
Buzzer provides alerts and metronome-like rhythm guidance.
Arduino Code: Combines libraries for sensor reading, display control, and output management.
Applications
The LLS is designed for:

Training healthcare providers in infant CPR techniques.
Supporting real-time CPR performance during emergencies.
Integration into first-aid kits for neonatal care.
Future Scope
Enhance sensor precision for finer feedback calibration.
Add wireless connectivity for data logging and monitoring.
Expand compatibility with various CPR training manikins.
This project was developed for the Arduino Competition 2024, showcasing how innovative technology can improve life-saving techniques. The LLS not only assists professionals but also ensures better care for the most fragile patients—newborn infants.
