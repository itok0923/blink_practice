#include "LEDSet.h"
#include "PushSet.h"

LEDSet led = LEDSet(PA5);
PushSet push = PushSet(PC13);
int toggle_stat = HIGH;

void setup() {
  attachInterrupt(digitalPinToInterrupt(push.Pushpin),pushtoggle,FALLING);
}

void loop() {
  if(toggle_stat == LOW){
    led.LED_on();
  }else{
    led.LED_blink();
    delay(1500);
  }
}
void pushtoggle(){
  toggle_stat = !toggle_stat;  
}
