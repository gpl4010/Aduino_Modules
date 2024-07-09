#define led1 4
#define led2 13
 
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}
 
//조도센서는 빛의 밝기와 반비례한 값 (빛이 커질수록 저항이 커짐)
void loop() {
  int cds = analogRead(A1); //조도센서에서 받은 값 변수cds에 저장
  Serial.println(cds);     //시리얼 모니터에 출력

  if(cds < 200) //cds값이 200보다 작으면
  {
    digitalWrite(led1, HIGH); //led1 온
    digitalWrite(led2, LOW);  //led2 오프
  }
  else          //cds값이 200보다 크면
  {
    digitalWrite(led1, LOW);  //led1 오프
    digitalWrite(led2, HIGH); //led2 온
  }
  delay(200); 
}
