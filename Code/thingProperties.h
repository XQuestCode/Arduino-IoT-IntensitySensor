// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_PASS;    // Network password (use for WPA, or use as key for WEP)

void onLedStateChange();

int intensity;
bool led_state;

void initProperties(){

  ArduinoCloud.addProperty(intensity, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(led_state, READWRITE, ON_CHANGE, onLedStateChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
