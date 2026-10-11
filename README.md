# 🤖 Animatronic Hand Using Flex Sensors and Arduino Mega


## 📌 Project Overview

The **Animatronic Hand** is an Arduino-based robotics project designed to mimic the movements of the five fingers of a human hand using flex sensors and servo motors.

The project uses five flex sensors, one for each finger, to detect bending movements. These sensors are connected to an Arduino Mega, which processes the sensor readings and controls five servo motors. The servo motors pull threads attached to the fingers of the mechanical hand, allowing the fingers to bend and imitate human hand movements.

The mechanical structure is made using corrugated plastic (coro plastic), threads, rubber bands, and other supporting materials.

This project demonstrates the practical application of robotics, electronics, sensors, and microcontroller programming.

## 🎯 Project Aim

To design and develop an animatronic hand using flex sensors and an Arduino Mega that mimics the movements of all five fingers of a human hand.


## 🛠️ Hardware Requirements

The following hardware components and materials are required to build the project:

| Sl. No. | Component                                      |    Quantity |
| ------- | ---------------------------------------------- | ----------: |
| 1       | Arduino Mega                                   |           1 |
| 2       | Flex sensors                                   |           5 |
| 3       | Servo motors                                   |           5 |
| 4       | Resistors                                      |           5 |
| 5       | Breadboard                                     |           1 |
| 6       | Corrugated plastic (coro plastic)              | As required |
| 7       | Hand glove                                     |           1 |
| 8       | Jumper wires                                   | As required |
| 9       | USB cable for Arduino                          |           1 |
| 10      | Battery sources                                |           2 |
| 11      | Bolts                                          |           5 |
| 12      | Threads                                        | As required |
| 13      | Rubber bands                                   | As required |
| 14      | Aluminium, carbon polymer, and insulation tape | As required |

**Note:** The flex sensors in this project are prepared using aluminium, carbon polymer, insulation tape, and jumper wires, as described in the project presentation.

## 💻 Software Requirements

* **Arduino IDE:** Used to write, compile, and upload the program to the Arduino Mega.
* **Arduino programming language:** Used to read flex sensor values and control the servo motors.

## ⚙️ Working Principle

The working principle of the animatronic hand is based on sensing finger bending and converting that movement into mechanical action.

### Step 1: Flex Sensor Input

Five flex sensors are attached to the five fingers of the user's hand. When a finger bends, the resistance of its corresponding flex sensor changes.

### Step 2: Signal Processing

The flex sensors are connected to the analogue input pins of the Arduino Mega. The Arduino reads the sensor values and uses the programmed logic to determine the corresponding finger movement.

### Step 3: Servo Motor Control

The Arduino sends control signals to five servo motors. Each servo motor is associated with a corresponding finger of the mechanical hand.

### Step 4: Mechanical Finger Movement

Threads are connected between the servo motors and the fingers of the mechanical hand. When a servo motor rotates, it pulls the corresponding thread, causing the finger to bend.

### Step 5: Mimicking Human Hand Movement

As the user bends or straightens their fingers, the flex sensor readings change. The Arduino processes these changes and controls the servo motors, allowing the animatronic hand to imitate the movements of the five fingers.

**Overall working flow:**

Human finger movement → Flex sensors → Arduino Mega → Servo motors → Mechanical finger movement

## 🔌 Circuit Connections

### 1. Flex Sensors to Arduino Mega

The five flex sensors are connected to the analogue input pins of the Arduino Mega as follows:

| Flex Sensor | Arduino Mega Pin |
| ----------- | ---------------- |
| Sensor A    | A4               |
| Sensor B    | A3               |
| Sensor C    | A2               |
| Sensor D    | A1               |
| Sensor E    | A0               |

The flex sensors provide changing analogue readings based on their bending.

**Important:** Each flex sensor should be connected as part of an appropriate voltage-divider circuit using a resistor so that the Arduino can measure its resistance changes. The presentation lists five resistors, but it does not specify their resistance values.

### 2. Servo Motors to Arduino Mega

The servo motor signal wires are connected to the following digital pins:

| Servo Motor | Arduino Mega Signal Pin |
| ----------- | ----------------------- |
| Servo 1     | D12                     |
| Servo 2     | D9                      |
| Servo 3     | D10                     |
| Servo 4     | D11                     |
| Servo 5     | D8                      |

The servo motors receive control signals from the Arduino Mega to move the corresponding fingers.

### 3. Servo Motors to Battery Supply

The project uses a separate battery supply for the servo motors.

| Servo Wire | Power Connection           |
| ---------- | -------------------------- |
| VCC        | Battery positive (anode)   |
| GND        | Battery negative (cathode) |

**Power supply note:** The presentation mentions a battery connection for four servos, while the project uses five servo motors. Ensure the power supply can safely support all five motors. Connect the servo power supply ground to the Arduino Mega GND so that the control signals have a common reference. Use a suitable voltage for the specific servo motors.

## 🔨 Construction Procedure

The animatronic hand is assembled through the following steps:

### Step 1: Prepare the Hand Structure

Cut the corrugated plastic according to the shape and size of the left hand. Create the basic structure for the five fingers and palm.

### Step 2: Attach Threads and Rubber Bands

Fix threads and rubber bands to each finger. These components help transmit the movement generated by the servo motors and support the mechanical finger mechanism.

### Step 3: Prepare the Servo Motor Mount

Cut additional corrugated plastic to create a mounting structure for the five servo motors. Secure the motors in suitable positions so they can pull the threads attached to the corresponding fingers.

### Step 4: Prepare the Flex Sensors

Prepare the five flex sensors using aluminium, carbon polymer, insulation tape, and jumper wires, following the construction method described in the project presentation.

### Step 5: Attach the Flex Sensors

Fix one flex sensor to each of the five fingers of the user's hand or glove. Ensure that the sensors can bend with the fingers without being damaged.

### Step 6: Connect the Sensors to Arduino Mega

Connect the five flex sensors to analogue pins A4, A3, A2, A1, and A0 according to the circuit connection table.

### Step 7: Connect the Servo Motors

Mount the five servo motors on the corrugated plastic structure. Connect their signal wires to digital pins D12, D9, D10, D11, and D8, respectively.

Attach each servo motor's thread to its corresponding mechanical finger.

### Step 8: Connect the Power Supply

Connect the servo motors to a suitable external battery supply. Ensure correct polarity and a common ground between the Arduino and the servo power supply.

### Step 9: Upload the Arduino Program

Write and compile the Arduino program using the Arduino IDE. Connect the Arduino Mega to a computer using a USB cable and upload the program.

### Step 10: Test the Animatronic Hand

Power on the system and bend the fingers one at a time. Observe the flex sensor readings and verify that the corresponding servo motors move the mechanical fingers as intended.

Adjust the sensor mapping, servo angles, and thread tension if required.

## 📊 Result

The animatronic hand prototype was constructed using flex sensors, servo motors, corrugated plastic, threads, rubber bands, and an Arduino Mega.

The system is designed to mimic the movements of all five fingers of a human hand. The flex sensors detect finger bending, and the Arduino Mega uses the sensor inputs to control the corresponding servo motors. The servo motors then pull the threads to produce mechanical finger movement.

The project demonstrates the integration of sensing, microcontroller-based control, and mechanical actuation in a robotic system.

## 🎥 Project Demo

Click below to watch the project demonstration on LinkedIn!

https://www.linkedin.com/posts/gone-ramu-2155092b2_project-title-animatronic-hand-project-ugcPost-7500449463543668737-0SHz/?utm_source=social_share_send&utm_medium=member_desktop_web&rcm=ACoAAEsumfEBdfpbRoL04rRFCpsATJalW3cUVUA


## 🔮 Future Improvements

The project can be improved in several ways:

* Use commercial flex sensors for more consistent readings.
* Add smoother servo control and adjustable finger movement ranges.
* Improve the mechanical hand structure using stronger and lighter materials.
* Add wireless communication for remote control and monitoring.
* Develop a more advanced control algorithm for coordinated finger movements.
* Incorporate additional sensors for more complex hand gestures.
* Using Computer vision to mimic hand movements





