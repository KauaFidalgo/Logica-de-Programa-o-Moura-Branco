// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Contagem de 0 a 100 usando FOR:");
  Serial.println("---------------------------");
}

void loop() {
  // Laço FOR para contar de 0 a 100
  for(int i = 0; i <= 100; i++) {
    Serial.println(i); // Mostra o número atual
    delay(100); // Pequena pausa para melhor visualização
  }
  
  Serial.println("---------------------------");
  Serial.println("Fim da contagem!");
  delay(3000); // Aguarda 3 segundos antes de reiniciar
}