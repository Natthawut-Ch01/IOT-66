void setup() {
  pinMode(2, OUTPUT);

}

void loop() {
  
  int i = 0;
  //0 - 255
  for(i=0; i<256; i++){
    analogWrite(2, i);  //0% is 0, 25% is 64, 50% is 127, 75% is 191, 100% is 255 (resister 150 Ohm)
    delay(50);         //analogWrite Maximum 5 pin
  }
  //254 - 0
  for(i=254; i<0; i--){
    analogWrite(2, i);  //0% is 0, 25% is 64, 50% is 127, 75% is 191, 100% is 255 (resister 150 Ohm)
    delay(50);         //analogWrite Maximum 5 pin
  }
  
}
