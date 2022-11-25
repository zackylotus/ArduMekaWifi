#include <ArduMekaWiFi.h>
char* ssid = "Isi Nama Wifi";
char* password = "Isi Password WiFi";
String url = "http://test.kelasrobot.com/test.php";

void setup() {
  Serial.begin(115200);
  aturWiFi(ssid, password);
}

void loop() {
  requestHTTP(url);
  delay(5000);
}
