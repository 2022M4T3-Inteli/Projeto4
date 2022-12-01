#include "WiFi.h"
// Change the SSID and PASSWORD here if needed
const char *WIFI_FTM_SSID = "BEACON1G4";
const char *WIFI_FTM_PASS = "GRUPO4";

void setup()
{
  Serial.begin(115200);
  Serial.println("Starting SoftAP with FTM Responder support");
  // Enable AP with FTM support (last argument is 'true')
  WiFi.softAP(WIFI_FTM_SSID, WIFI_FTM_PASS, 1, 0, 4, true);
}

void loop()
{
  // nada
}
