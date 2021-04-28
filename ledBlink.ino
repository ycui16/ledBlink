int ledPin = 13;
int ledPin2 = 14;
int button1 = 33;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(button1, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(button1) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin2, HIGH);
    delay(500);
    digitalWrite(ledPin2, LOW);
    // put your main code here, to run repeatedly:

  }
}
