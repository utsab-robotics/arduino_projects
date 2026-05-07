int pir_output = 2;
int led_pin = 3;


void setup(){
  pinMode(pir_output, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
  }

void loop(){
  int res = digitalRead(pir_output);
  if(res == 1){
    Serial.println("Motion detected");
    digitalWrite(led_pin, HIGH);
    }
   else{
    Serial.println("No Motion detected");
    digitalWrite(led_pin, LOW);
    }
  delay(1000);
  }
