// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  int numero;
  
  Serial.println("\nDigite um numero inteiro (positivo ou negativo):");
  while(!Serial.available()) {} // Aguarda entrada do usuário
  numero = Serial.parseInt(); // Lê um número inteiro
  Serial.read(); // Limpa o buffer
  
  // Verifica se o número é positivo, negativo ou zero
  if(numero > 0) {
    Serial.print("O numero ");
    Serial.print(numero);
    Serial.println(" eh POSITIVO.");
  } 
  else if(numero < 0) {
    Serial.print("O numero ");
    Serial.print(numero);
    Serial.println(" eh NEGATIVO.");
  }
  else {
    Serial.println("Voce digitou ZERO (neutro).");
  }
  
  Serial.println("----------------------------");
  delay(2000); // Espera 2 segundos antes de reiniciar
}