//ฝั่งผู้ส่ง
/*void setup() {
  pinMode(13, OUTPUT);
  Serial0.begin(9600);

}

void loop() {
  while (Serial0.available() > 0) {
    char a = Serial0.read();
    if(a == '1'){
      digitalWrite(13, HIGH);
    }
    else if(a == '0'){
      digitalWrite(13, LOW);
    }
  }

}*/

//ผู้รับ
void setup(){
  Serial.begin(9600);
  Serial0.begin(9600);
}

void loop(){
  if(Serial.read() == '1'){
    Serial0.println('1');
    Serial.println("ส่งข้อมูล 1 แล้ว");
  }
  else if(Serial.read() == '0'){
    Serial0.print('0');
    Serial.println("ส่งข้อมูล 0 แล้ว");
  }
}










