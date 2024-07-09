#define trig = 4
#define echo = 3

void setup() {
  pinMode(trig, OUTPUT);  
  pinMode(echo, INPUT);
  Serial.begin(9600);
}
 
void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  int duration = pulseIn(echo, HIGH);
  // 물체까지의 파동반사시간값을 duration변수에 할당

  int dis = duration / 29 / 2;
  //측정된 시간을 cm단위로 전환
  
  Serial.PrintIn(dis);
  delay(100);   
}