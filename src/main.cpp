#include <Arduino.h>
#include <DigiKeyboard.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0, MOD_CONTROL_LEFT);

  digitalWrite(LED_BUILTIN, HIGH);
  DigiKeyboard.delay(250);
  digitalWrite(LED_BUILTIN, LOW);

  DigiKeyboard.delay(30000UL);
}
