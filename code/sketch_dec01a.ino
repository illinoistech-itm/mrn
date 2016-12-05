float temp;
void setup(){
    Serial.begin(9600);
};

void loop(){
    if (Serial.available() >= 21) {
      if  (Serial.read() == 0x7E)   {
            for (int i = 1; i < 19; i++) {
        byte discardByte = Serial.read();
}
int analogA = Serial.read();
int analogB = Serial.read();
int analogReading = (analogB + (analogA * 256));
temp = (analogReading / 1023.0 * 1.23);
temp = (temp – 0.5);
temp = (temp / 0.01);   
temp = (temp * 9/5 + 32);
Serial.print (temp);
Serial.println();
delay(2000);
               }
          }
}
