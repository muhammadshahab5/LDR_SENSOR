        //LDR//
 int ldr = A0;
 void setup() {
 
 PinMode(ldr,INPUT);
 Serial.begin(9600);

}

void loop() {
  int var = analogeWrite(ldr);
  Serial.println(LDR);
  
}
