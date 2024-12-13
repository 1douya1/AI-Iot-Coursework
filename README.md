# AI-IoT-Coursework

This repository contains the code and resources for the **Smart Shuttle Management System**, an integration of IoT and AI designed to predict shuttle demand and manage operations efficiently.

## Project Description

The Smart Shuttle Management System leverages sensor data and a regression model to estimate crowd sizes at shuttle stations. The system includes real-time data visualization, LED-controlled demand signaling, and dashboards tailored for shuttle operators and students. The Arduino IoT Cloud and Python scripts are used to implement and integrate the system.

Access additional files and video via Google Drive: https://drive.google.com/drive/folders/1O-69COtVmFYxglTHoGb8D0UkxHS9cSgD?usp=sharing

## Instructions

### Getting Started
1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/your-repo/AI-IoT-Coursework.git

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
AI-IoT-Coursework/
│
├── CollectingDataSet_Part1/       # Sensor datasets and data processing scripts
│   ├── dataset.csv                # Collected datasets
│   ├── data_processing.ipynb      # Jupyter Notebook for analysis
│
├── IOT_dec06a/                    # Arduino project files
│   ├── iot_sensor_processing.ino  # Main Arduino code
│   ├── layout.png                 # Circuit layout (in Google Drive)
│   └── schematics.png             # Circuit schematics (in Google Drive)
│
├── LICENSE                        # Project license (MIT License)
└── README.md                      # Project overview and instructions
```

## License
This project is released under a Public Domain license.

## Contributing
To contribute to this project, please contact the author.

## Bill of Materials (BOM)
| ID   | Part Name         | Part Number | Quantity |
|------|-------------------|-------------|----------|
| L1   | Red LED           | 2345-asdf   | 5        |
| A1   | Arduino Zero      | ABX00066    | 1        |
| S1   | Microphone Sensor | XYZ12345    | 1        |
| S2   | Temperature Sensor| TMP36       | 1        |
| S3   | Humidity Sensor   | DHT11       | 1        
