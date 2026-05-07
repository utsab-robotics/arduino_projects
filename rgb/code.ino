int red_pin = 6;
int green_pin = 5;
int blue_pin = 3;


void setup(){
  pinMode(red_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(blue_pin, OUTPUT);
  Serial.begin(9600);
  }


void loop(){
  //Red Light
  analogWrite(red_pin, 0);
  analogWrite(green_pin, 255);
  analogWrite(blue_pin, 255);
  delay(1000);

   //Green Light
  analogWrite(red_pin, 255);
  analogWrite(green_pin, 0);
  analogWrite(blue_pin, 255);
  delay(1000);

   //Blue Light
  analogWrite(red_pin, 255);
  analogWrite(green_pin, 255);
  analogWrite(blue_pin, 0);
  delay(1000);

  //Yellow Light
  analogWrite(red_pin, 0);
  analogWrite(green_pin, 0);
  analogWrite(blue_pin, 255);
  delay(1000);

  //Purple Light
  analogWrite(red_pin, 0);
  analogWrite(green_pin, 255);
  analogWrite(blue_pin, 0);
  delay(1000);

  //White Light
  analogWrite(red_pin, 0);
  analogWrite(green_pin, 0);
  analogWrite(blue_pin, 0);
  delay(1000);
  
  }
