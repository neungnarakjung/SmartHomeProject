//#define BOARD GNUBLIN
#define BOARD RASPBERRY_PI
 
#include "gnublin.h"
//#include "gpio.h" 
int main()
{
   gnublin_gpio gpio;
 
   gpio.pinMode(3,OUTPUT);
 
   while(1){
     gpio.digitalWrite(3,HIGH);
     sleep(2);
     gpio.digitalWrite(3,LOW);
     sleep(2);
   }
   return 0;
}
