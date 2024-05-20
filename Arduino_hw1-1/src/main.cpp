#include <Arduino.h>


void setup() {
  for (int i = 2; i <= 7; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 2; i <= 7; i++){
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
  delay(1000);
  for (int i = 7; i >= 2; i--){
    digitalWrite(i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
  }
  delay(1000);
}

