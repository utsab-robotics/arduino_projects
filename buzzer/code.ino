int buzzerPin = 8;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  digitalWrite(buzzerPin, HIGH); // ON
  delay(1000);

  digitalWrite(buzzerPin, LOW);  // OFF
  delay(1000);
}