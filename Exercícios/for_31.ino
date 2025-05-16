// C++ code
//
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Contagem de 5 em 5:");
  
  for(int i = 0; i <= 50; i += 5) {
    Serial.println(i);
    delay(500);
  }
  
  delay(2000); // Espera 2 segundos antes de reiniciar
}