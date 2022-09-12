#include <lin_stack.h>
lin_stack linSend(0x14);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  
     byte democode[8]={0x00,0x00,0x10,0xcf,0x31,0x00,0x1f,0xe6};
     linSend.write(0x14,democode,8);
     delay (45);
     
}
