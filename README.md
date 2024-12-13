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
:Email: wh624@ic.ac.uk
:Date: 06/12/2024
:Revision: version#
:License: Public Domain

= Project: IOT Coursework

## Features
- Real-time crowd estimation using sensor data and a regression model.
- Dashboard visualization for operators and students.
- Actuator logic to control LEDs based on demand thresholds.

## Step 1: Installation
1. Clone this repository.
2. Open the Arduino IDE or Arduino Cloud Editor.
3. Install all necessary libraries listed in the `libraries.txt` file.
4. Edit the configuration file (if needed) to match your setup.
5. Upload the code to your ESP32 board.

## Step 2: Assemble the Circuit
Assemble the circuit following the diagram in `layout.png`. Ensure all sensors and actuators are connected correctly to the ESP32 microcontroller.

## Step 3: Load the Code
Upload the code contained in this repository to your ESP32 board. Ensure the Wi-Fi credentials and API keys (if applicable) are set up correctly in the code.

## Folder Structure
```
project-folder
├── IOT_Sketch.ino      # Main Arduino sketch
├── schematics.png      # Diagram of the required schematics
├── layout.png          # Diagram of the hardware layout
├── ReadMe.md           # This file
└── libraries.txt       # List of libraries required for the project
```

## License
This project is released under a Public Domain license.

## Contributing
To contribute to this project, please contact the author.

## Bill of Materials (BOM)
| ID   | Part Name         | Part Number | Quantity |
|------|-------------------|-------------|----------|
| R1   | 10k Resistor      | 1234-abcd   | 10       |
| L1   | Red LED           | 2345-asdf   | 5        |
| A1   | Arduino Zero      | ABX00066    | 1        |
| S1   | Microphone Sensor | XYZ12345    | 1        |
| S2   | Temperature Sensor| TMP36       | 1        |
| S3   | Humidity Sensor   | DHT11       | 1        
