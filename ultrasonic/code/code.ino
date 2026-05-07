int trig_pin = 9;
int echo_pin = 10;

long duration;
float distance;

void setup() {
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);

  Serial.begin(9600);
}

void loop() {

  // Clear trigger pin
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);

  // Send ultrasonic pulse
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  // Read echo time
  duration = pulseIn(echo_pin, HIGH);

  // Calculate distance
  distance = duration * 0.034 / 2;

  // Print distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);
}