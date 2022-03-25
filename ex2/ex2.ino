#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12,11,10,9,8,7);



void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i <5; i++) {
    pinMode(i, OUTPUT);

  }
  lcd.begin(20,4);

}

void loop() {
  int val = analogRead(A0);
  int conVal = map(val, 0, 1023, 0, 4);
  lcd.setCursor(3,1);
    lcd.println("LED N = ");
    lcd.print(conVal);
    lcd.setCursor(1,4);
    lcd.println("CLUB ROBOTIQUE :)");
  if (conVal == 0) {
    digitalWrite(0, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (conVal == 1) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  }
  else if (conVal == 2) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  } else if (conVal == 3) {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  } else {
    digitalWrite(0, HIGH);
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
  }
}
