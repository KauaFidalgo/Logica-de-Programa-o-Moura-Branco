// C++ code
//
void setup() {
  Serial.begin(9600);
  Serial.println("Digite um numero:");
}

void loop() {
  if(Serial.available()) {
    int N = Serial.parseInt();
    if(N >= 0) {
      for(int i = 0; i <= N; i++) {
        Serial.println(i);
      }
    }
    while(Serial.available()) Serial.read();
  }
}