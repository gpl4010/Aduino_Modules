int fnd[] = {3, 4, 5, 6, 7, 8, 9, 10};
 
int love[4][8] = { {1, 1, 1, 0, 0, 0, 1, 1}, // L
                {0, 0, 0, 0, 0, 0, 1, 1},    // O
                {1, 0, 0, 0, 0, 0, 1, 1},    // V
                {0, 1, 1, 0, 0, 0, 0, 1},    // E
                };
void setup() {
  for(int i=0; i<8; i++)
    pinMode(fnd[i], OUTPUT);
}
 
void loop() {
  for(int i=0; i<4; i++)
  {
    for(int j=0; j<8; j++)
    {
      digitalWrite(fnd[j], love[i][j]);
    }
    delay(1000);
  }
}

//기본적으로 LED모듈이 여러개 있는것과 동일한 형태