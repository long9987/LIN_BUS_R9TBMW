#include <lin_stack.h>

const byte ident = 0x14;
byte data_size = 11;
byte data[11];
lin_stack linRec(ident);


void setup() {
  Serial.begin(115200);
  Serial.println("Lin bus debuging begin!");
  linRec.setSerial();

}

void loop() {
  byte chk = linRec.readStream(data, data_size);
  if (chk == 1) {
   // Serial.println("Traffic detected!");
    //    Serial.print("Synch Byte: ");
    //    Serial.print("Ident Byte: ");
    //    Serial.print(data[0],HEX);
    //    Serial.print("  ");
    //    Serial.print(data[1],HEX);
    //    Serial.print("  ");
    for (int i = 0; i < data_size; i++) {
      if (data[i] <= 0xf) Serial.write('0');
        Serial.print(data[i], HEX);
        Serial.print(" ");
      
    }
    Serial.println();
  //  delay(45);

  }

}
