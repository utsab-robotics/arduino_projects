
#include <LedControl.h>

LedControl lc = LedControl(8, 10, 9, 1);
int i =0 ;

byte smile[8]={
  0b00111100,
  0b01000010,
  0b10100101,
  0b10000001,
  0b10100101,
  0b10011001,
  0b01000010,
  0b000111100
  };
void setup() {
  
  lc.shutdown(0, false);
  lc.setIntensity(0, 8);
  lc.clearDisplay(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (i < 8){
    lc.setRow(0, i, smile[i]);
    i++;
    }
    
}
