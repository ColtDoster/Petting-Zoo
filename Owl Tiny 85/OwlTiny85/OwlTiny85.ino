void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  int raw = analogRead(3);
  int light = map(raw, 750, 0, 0, 255);
  analogWrite(1, light);
  //digitalWrite(1, HIGH); delay(100);
  //digitalWrite(1, LOW); delay(100);
}
