#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

const char* ssid     = "NO LEEKS";
const char* password = "NO LEEKS";

const char* scheduleURL = "http://pi.local/schedule.json";

void setup() {
  Serial1.begin(115200, SERIAL_8N1, /*RX*/ 9, /*TX*/ 10); 

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(scheduleURL);
    int code = http.GET();
    if (code == 200) {
      String payload = http.getString();
      Serial1.println(payload);
      Serial.println("The schedule sent to the mcu.");
    } else {
      Serial.printf("Error!!!, code);
    }
    http.end();
  } else {
    Serial.println("Down!");
  }
  
  delay(60 * 60 * 1000UL);
}
