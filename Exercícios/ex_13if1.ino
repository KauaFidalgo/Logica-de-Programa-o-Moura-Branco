// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  int numero;
  
  Serial.println("\nDigite um número inteiro (ou 0 para sair):");
  while(!Serial.available()) {} // Aguarda entrada do usuário
  numero = Serial.parseInt(); // Lê um número inteiro
  Serial.read(); // Limpa o buffer
  
  // Verifica se o número é par
  if(numero % 2 == 0) {
    Serial.print("Número par digitado: ");
    Serial.println(numero);
  }
  else {
    Serial.println("O número digitado é ímpar e não será exibido.");
  }
  
  Serial.println("--------------------------");
  delay(2000); // Espera 2 segundos antes de reiniciar
}