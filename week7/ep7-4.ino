void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  
  int a = 0, b = 0;
  a = analogRead(A0);
  b = map(a, 0, 4095, 0, 255);

  Serial.print("ค่าตัวแปล a: ");
  Serial.print(a);
  Serial.print("ค่าตัวแปล b: ");
  Serial.println(b);

  Serial.println(b);
  analogWrite(2, b);
  
}
