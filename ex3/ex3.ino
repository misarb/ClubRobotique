void setup() {
  pinMode(0, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(A0);
  if (val == LOW) {
    digitalWrite(0, HIGH);
  } else {
    digitalWrite(0, LOW);
  }

}
