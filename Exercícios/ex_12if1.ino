// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  int numero;
  
  Serial.println("\nDigite um número inteiro:");
  while(!Serial.available()) {} // Aguarda entrada do usuário
  numero = Serial.parseInt(); // Lê um número inteiro
  Serial.read(); // Limpa o buffer
  
  // Verifica se o número é par ou ímpar
  if(numero % 2 == 0) {
    Serial.print("o numero ");
    Serial.print(numero);
    Serial.println(" e par.");
  } 
  else {
    Serial.print("o numero ");
    Serial.print(numero);
    Serial.println(" eh impar.");
  }
  
  Serial.println("----------------------------");
  delay(2000); // Espera 2 segundos antes de reiniciar
}