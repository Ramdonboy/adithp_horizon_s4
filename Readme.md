# Arduino Servo Control with Potentiometer (Tinkercad Simulation)

##  Project Overview

This project demonstrates how an Arduino controls a servo motor using a potentiometer in a Tinkercad simulation environment. The potentiometer adjusts the servo angle, with a safety constraint that prevents rotation beyond 68 degrees.

An LED indicator is used to signal when the input attempts to exceed the safe limit.

---

##  Objectives

* Control a servo motor using a potentiometer
* Limit servo rotation to a maximum of **68°**
* Turn ON an LED when the input exceeds the safe limit
* Keep LED OFF when within safe range

---

##  Components Used

* Arduino Uno
* Servo Motor
* Potentiometer
* LED
* Resistor (220Ω recommended)
* Jumper Wires

---

##  Circuit Connections

### Potentiometer

* Left pin → 5V
* Right pin → GND
* Middle pin → A0

### Servo Motor

* Red wire → 5V
* Brown/Black wire → GND
* Yellow/Orange wire → Pin 9

### LED

* Anode (long leg) → Pin 7 (via resistor)
* Cathode (short leg) → GND

---

##  Working Principle

* The Arduino reads analog input from the potentiometer (0–1023)
* This value is mapped to a servo angle (0–180°)
* If the angle exceeds **68°**:

  * Servo position is limited to 68°
  * LED turns ON
* Otherwise:

  * Servo follows the potentiometer input
  * LED remains OFF

---



---

##  Simulation Demo
 Video Link:
https://drive.google.com/file/d/1Jj3lrv_L4MHyXXMwNBPlsdbf9ypelGBl/view?usp=sharing
 
---

##  Tinkercad Circuit

 Project Link:
![alt text](<Mighty Jaiks-Jofo-1.png>)

---



##  Example Behavior

* Potentiometer at 30° → Servo at 30°, LED OFF
* Potentiometer at 70° → Servo stops at 68°, LED ON

---

##  Safety Logic

If requested angle > 68°:

* Limit servo to 68°
* Turn LED ON

Else:

* Normal operation
* LED OFF

---

##  References

* Arduino Servo Library Documentation
* Tinkercad Arduino Simulation Tutorials

---

