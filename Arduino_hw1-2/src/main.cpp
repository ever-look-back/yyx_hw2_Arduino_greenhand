#include <Arduino.h>

char instruct = '0';

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  Serial.println("Please enter instruction:");
  while (instruct == '0'){
    if (Serial.available()){
    instruct = Serial.read();
      switch (instruct){
        case '1':digitalWrite(3, HIGH); Serial.println("LED 1 light on."); delay(1000); digitalWrite(3, LOW); break;
        case '2':digitalWrite(4, HIGH); Serial.println("LED 2 light on."); delay(1000); digitalWrite(4, LOW); break;
        default: Serial.println("Invalid input!");
      }
    }
  }
  instruct = '0';
}

