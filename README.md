# Lullaby LifeSaver (LLS) Infant CPR Support Device using Arduino Mini

---

## Overview
The **Lullaby LifeSaver (LLS)** is an Arduino-based CPR support device designed to assist healthcare professionals in delivering effective and precise cardiopulmonary resuscitation (CPR) for infants. This lightweight, portable device provides real-time auditory and visual feedback on compression depth, force, and rhythm—critical factors for successful resuscitation. By leveraging sensors, LEDs, an OLED display, and a buzzer, the LLS ensures that compressions meet the delicate physiological needs of newborns.

---

## Features
- **Real-Time Feedback:**
  - Displays compression depth (cm) and force (N) on an OLED screen.
  - Five-LED array provides intuitive visual guidance on compression quality.
  - Buzzer alerts for improper compressions and offers rhythm guidance.

- **Key Metrics:**
  - Compression depth between 3.8–5.1 cm.
  - Compression force threshold around 40 N.

- **Seamless Design:**
  - Compact and user-friendly design for integration into first-aid kits.
  - Hidden wiring for professional presentation and ease of use.

---
## Project Image
![IMG_7303](https://github.com/user-attachments/assets/80473aec-2ab4-4b8a-b3f8-fdc1ce43f499)
![IMG_7153](https://github.com/user-attachments/assets/99078a04-6d1a-4538-9479-651be6d0f36a)

## Components
- **Arduino Mini**: Core microcontroller for processing sensor data and driving outputs.
- **ZD10-100 Force Sensing Sensor**: Measures real-time compression force.
- **128x32 OLED Display**: Provides visual feedback on depth and force.
- **LEDs**: Five-LED array for visual compression status.
- **16 Ohm Buzzer**: Audio guidance and alerts.
- **Power Bank**: Portable power supply for standalone operation.

---

## Technical Implementation
- **Sensors**: Force-sensing strip reads compression force, calibrated to translate analog values to Newtons.
- **Display**: OLED screen maps sensor readings to real-time feedback for both force (N) and depth (cm).
- **Feedback**:
  - LEDs light up progressively based on compression quality.
  - Buzzer provides alerts and metronome-like rhythm guidance.
- **Arduino Code**: Combines libraries for sensor reading, display control, and output management.

---

## Applications
The LLS is designed for:
- Training healthcare providers in infant CPR techniques.
- Supporting real-time CPR performance during emergencies.
- Integration into first-aid kits for neonatal care.

---

## Future Scope
- Enhance sensor precision for finer feedback calibration.
- Add wireless connectivity for data logging and monitoring.
- Expand compatibility with various CPR training manikins.

---

This project was developed for the **Arduino Competition 2024**, showcasing how innovative technology can improve life-saving techniques. The LLS not only assists professionals but also ensures better care for the most fragile patients—newborn infants.
