#include "LEDSet.h"
#include "PushSet.h"

LEDSet led = LEDSet(PA5);
PushSet push = PushSet(PC13);
int val = HIGH;

void setup() {
  attachInterrupt(digitalPinToInterrupt(PC13),pushtoggle,FALLING);
}

void loop() {
  if(val == LOW){
    led.on();
  }else{
    led.swtiching();
  }
  delay(1500);
}
void pushtoggle(){
  val = !val;  
}
