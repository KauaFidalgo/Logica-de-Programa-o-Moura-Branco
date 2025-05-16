// C++ code
//
void setup() {
  Serial.begin(9600);
  int contador = 0;
  
  while(contador <= 100) {
    Serial.println(contador);
    contador++;
  }
}

void loop() {
  // Vazio - executa apenas uma vez
}