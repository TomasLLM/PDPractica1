#include <Arduino.h>
#define LED_BUILTIN 23
#define DELAY 500

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
  delay(DELAY);
  Serial.println("Bon dia :)");
}

void loop() {
  Serial.println("Led ences");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(DELAY);
  Serial.println("Led apagat");
  digitalWrite(LED_BUILTIN, LOW);
  delay(DELAY);
}
