void setup() {
  pinMode(2, OUTPUT);
  analogWriteResolution(10);//8=0-255 Default, 10=0-1023, 12=0-4095
  //Serial.begin(9600);

}

void loop() {
  analogWrite(2, 128);
  delay(50);
  
  
  
}
