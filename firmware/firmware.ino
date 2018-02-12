// shut-it firmware
// 
// 1. turns on a LED when power is applied
// 2. waits 30 seconds
// 3. starts playing a two-tone melody
//
// Author Epp Õlekõrs
// License MIT

void setup() {
  pinMode(11, OUTPUT); // led
  pinMode(A2, OUTPUT); // buzzer
  lightOn();
  delay(30000);
}

void lightOn() {
  digitalWrite(11, HIGH);
}

void playMelody() {
  tone(A2, 1100, 100);
  delay(1000);
  tone(A2, 1319, 400);
  delay(1000);
}

void loop() {
  playMelody();
}

