void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 8; i <=11; i++) {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    delay(500);
    if (i == 11) {
      digitalWrite(i - 1, HIGH);
      delay(500);
      digitalWrite(i - 1, LOW);
      delay(500);

    }
  }

}
