// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char DEVICE_LOGIN_NAME[]  = "b272b4bd-a6b0-403d-bfd4-8002a554167d";

const char SSID[]               = SECRET_SSID;    // Network SSID (name)
const char PASS[]               = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)
const char DEVICE_KEY[]  = SECRET_DEVICE_KEY;    // Secret device password

void onFeelTempChange();
void onHumidityChange();
void onMicrophoneChange();
void onTemperaturesChange();
void onTempMaxChange();
void onTempMinChange();
void onWindDegChange();
void onWindSpeedChange();
void onBusLantitudeChange();
void onBusLongtitudeChange();
void onLEDChange();

float feelTemp;
float humidity;
float microphone;
float temperatures;
float tempMax;
float tempMin;
float windDeg;
float windSpeed;
int num_Pepole;
CloudLocation busLantitude;
CloudLocation busLongtitude;
bool lED;

void initProperties(){

  ArduinoCloud.setBoardId(DEVICE_LOGIN_NAME);
  ArduinoCloud.setSecretDeviceKey(DEVICE_KEY);
  ArduinoCloud.addProperty(feelTemp, READWRITE, 10 * SECONDS, onFeelTempChange);
  ArduinoCloud.addProperty(humidity, READWRITE, 10 * SECONDS, onHumidityChange);
  ArduinoCloud.addProperty(microphone, READWRITE, 1 * SECONDS, onMicrophoneChange);
  ArduinoCloud.addProperty(temperatures, READWRITE, 10 * SECONDS, onTemperaturesChange);
  ArduinoCloud.addProperty(tempMax, READWRITE, 10 * SECONDS, onTempMaxChange);
  ArduinoCloud.addProperty(tempMin, READWRITE, 10 * SECONDS, onTempMinChange);
  ArduinoCloud.addProperty(windDeg, READWRITE, 10 * SECONDS, onWindDegChange);
  ArduinoCloud.addProperty(windSpeed, READWRITE, 10 * SECONDS, onWindSpeedChange);
  ArduinoCloud.addProperty(num_Pepole, READ, 3 * SECONDS, NULL);
  ArduinoCloud.addProperty(busLantitude, READWRITE, 1 * SECONDS, onBusLantitudeChange);
  ArduinoCloud.addProperty(busLongtitude, READWRITE, 1 * SECONDS, onBusLongtitudeChange);
  ArduinoCloud.addProperty(lED, READWRITE, 3 * SECONDS, onLEDChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
