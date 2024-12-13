# AI-Iot-Coursework
This repository contains the code for the Smart Shuttle Management System, which integrates IoT and AI to predict shuttle demand and manage operations efficiently.



## Instructions
- Upload the `Arduino` code to your ESP32 microcontroller.
- Set up the Arduino IoT Cloud dashboard using the variables defined in the code.
- Run the Python scripts for data preprocessing and model development.

## Files
- `iot_sensor_processing.ino`: Arduino code for sensor integration and LED control.
- `data_preprocessing.py`: Python script for cleaning and processing sensor data.
- `model_development.py`: Python script for regression model training and evaluation.
- `dashboard_integration.md`: Guide for setting up the Arduino IoT Cloud dashboard.

:Author: wenhaohong
:Email:
:Date: 06/12/2024
:Revision: version#
:License: Public Domain

= Project: IOT Coursework

## Features
- Real-time crowd estimation using sensor data and a regression model.
- Dashboard visualization for operators and students.
- Actuator logic to control LEDs based on demand thresholds.

== Step 1: Installation
Please describe the steps to install this project.

For example:

1. Open this file
2. Edit as you like
3. Release to the World!

== Step 2: Assemble the circuit

Assemble the circuit following the diagram layout.png attached to the sketch

== Step 3: Load the code

Upload the code contained in this sketch on to your board

=== Folder structure

....
 sketch123                => Arduino sketch folder
  ├── sketch123.ino       => main Arduino file
  ├── schematics.png      => (optional) an image of the required schematics
  ├── layout.png          => (optional) an image of the layout
  └── ReadMe.adoc         => this file
....

=== License
This project is released under a {License} License.

=== Contributing
To contribute to this project please contact: 

=== BOM
Add the bill of the materials you need for this project.

|===
| ID | Part name      | Part number | Quantity
| R1 | 10k Resistor   | 1234-abcd   | 10       
| L1 | Red LED        | 2345-asdf   | 5        
| A1 | Arduino Zero   | ABX00066    | 1        
|===
