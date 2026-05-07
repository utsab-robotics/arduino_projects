int blue_pin = 2;
int red_pin = 3;
int white_pin = 4;

void setup(){
  pinMode(blue_pin, OUTPUT);  
  pinMode(red_pin, OUTPUT);
  pinMode(white_pin, OUTPUT);
}

void loop(){
  digitalWrite(blue_pin, HIGH);
  digitalWrite(red_pin, LOW);
  digitalWrite(white_pin, LOW);
  delay(1000);

  digitalWrite(blue_pin, LOW);
  digitalWrite(red_pin, HIGH);
  digitalWrite(white_pin, LOW);
  delay(1000);

  digitalWrite(blue_pin, LOW);
  digitalWrite(red_pin, LOW);
  digitalWrite(white_pin, HIGH);
  delay(1000);
}
