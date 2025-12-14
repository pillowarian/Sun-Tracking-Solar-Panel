# ☀️ Sun Tracking Solar Panel

## Project Overview

This project features an automated solar panel mount that maximizes energy collection by continuously tracking the sun's position. It uses an **Arduino UNO** microcontroller to read light intensity from two Light-Dependent Resistors (LDRs) and precisely adjusts the panel's angle using an **SG90 servo motor**.

| Feature | Description |
| :--- | :--- |
| **Microcontroller** | Arduino UNO |
| **Actuator** | SG90 Servo Motor |
| **Sensing** | Differential LDR Light Sensing |
| **Code Language** | C++ (Arduino Sketch) |
| **Mechanism** | Simple Single-Axis Tracking |

## 🚀 How It Works

The core functionality relies on a simple principle known as **differential light sensing**:

1.  **Sensing Setup:** Two LDRs are mounted side-by-side with a small physical barrier (like a piece of foam/cardboard) between them, creating a 'light divider.'
2.  **Light Comparison:** The Arduino reads the analog values from both LDRs. If the panel is perfectly aligned with the sun, both LDRs receive roughly equal light.
3.  **Adjustment Logic:**
    * If **LDR 1** receives significantly more light than **LDR 2**, it indicates the sun has moved toward LDR 1's side. The servo is commanded to turn the panel in that direction.
    * If **LDR 2** receives significantly more light, the servo turns the panel toward LDR 2's side.
    * A defined error tolerance prevents constant, unnecessary movement.

## 📋 Components Required

These are the materials needed to build this single-axis sun tracker:

| Component | Quantity | Notes |
| :--- | :--- | :--- |
| **Arduino UNO** | 1 | Microcontroller board. |
| **Solar Panel** | 1 | Small panel for demonstration. |
| **SG90 Servo Motor** | 1 | Used to adjust the panel angle. |
| **LDR Sensor** | 2 | Light-Dependent Resistors for sensing. |
| **10kΩ Resistor** | 2 | Used with the LDRs to form a voltage divider. |
| **Jumper Wires** | Varies | For connections. |
| **Rigifoam / Foam Board / Cardboard** | Varies | Used to build the mechanical frame and LDR housing. |

## ⚙️ Wiring Diagram

The LDRs are configured as voltage dividers to provide variable analog voltage to the Arduino's input pins. The servo motor is connected to a PWM pin for positional control.

****

| Component Pin | Arduino Pin | Purpose |
| :--- | :--- | :--- |
| **LDR 1** (Analog Out) | **A4** | East/West light input 1 |
| **LDR 2** (Analog Out) | **A5** | East/West light input 2 |
| **Servo Signal** | **11** | PWM signal for position control |
| **VCC** (5V) | **5V** | Power supply |
| **GND** | **GND** | Ground connection |

## 💻 Software and Installation

### Code

The complete Arduino sketch is located in the repository:
[`sun_tracker_code.ino`](/sun_tracker_code.ino)

### Dependencies

This project relies on the standard **`Servo.h`** library, which is pre-installed with the Arduino IDE. No external library installations are necessary.

### Setup Instructions

1.  **Download/Clone:** Download or clone this repository to your computer.
    ```bash
    git clone [https://github.com/pillowarian/Sun-Tracking-Solar-Panel.git](https://github.com/pillowarian/Sun-Tracking-Solar-Panel.git)
    ```
2.  **Open Sketch:** Open the `sun_tracker_code.ino` file in the Arduino IDE.
3.  **Configure IDE:** Select your board (**Arduino UNO**) and the correct serial port.
4.  **Upload:** Click the **Upload** button to transfer the code to the Arduino.
5.  **Monitor:** Open the **Serial Monitor** (set to **9600 baud**) to observe the LDR values and tracking adjustments in real-time.

## 🖼️ Construction and Assembly

The mechanical assembly can be created using the **Rigifoam, foam board, and cardboard**.

1.  **Base:** Build a stable base for the servo motor.
2.  **Mount:** Attach the solar panel to the servo motor horn so it can rotate smoothly.
3.  **LDR Housing:** Crucially, mount the two LDRs next to the solar panel and use a small piece of cardboard/foam in between them. This divider ensures that when the sun is off-center, one LDR is shaded more than the other, creating the necessary difference for the tracking logic.

---

### 🔗 Repository Link

You can find all code and files related to this project here:
[https://github.com/pillowarian/Sun-Tracking-Solar-Panel](https://github.com/pillowarian/Sun-Tracking-Solar-Panel)

---

I can help you add the actual code content into this README, or create a structure for a separate `CODE` folder for better organization. How would you like to proceed?
