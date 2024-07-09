#define R 7
#define G 5
#define B 3
#define sw1 12
#define sw2 10
#define sw3 8
//각 핀 포트할당
 
void setup() {
  
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(sw3, INPUT_PULLUP);
  //핀 모드 RGB는 아웃풋으로 스위치는 인풋으로 설정
}
 
void loop() {
  
  if(digitalRead(sw1) == LOW)
    digitalWrite(R, HIGH);
  else
    digitalWrite(R, LOW);
  //만약 sw1이 눌렸다면 빨간불 키기 아니면 끄기
    
  if(digitalRead(sw2) == LOW)
    digitalWrite(G, HIGH);
  else
    digitalWrite(G, LOW);
    
  if(digitalRead(sw3) == LOW)
    digitalWrite(B, HIGH);
  else
    digitalWrite(B, LOW);  
}
