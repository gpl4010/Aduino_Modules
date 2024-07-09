int piezo = 7;
int tones[] = { 523, 587, 659, 698, 784, 880, 988, 1046 };
//각각 도레미파솔라시도
 
void setup() {
  pinMode(piezo, OUTPUT);
  for(int i=0; i < 8; i++)  //for문을 이용하여 i값을 증가시켜
  {                         //도레미파솔라시도를 출력한다.
    tone(piezo, tones[i]);   
    delay(1000);
  }
  noTone(piezo);
}
 
void loop() {
  
}