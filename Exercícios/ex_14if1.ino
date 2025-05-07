// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  float numero1, numero2;
  
  Serial.println("\nDigite o primeiro numero:");
  while(!Serial.available()) {} // Aguarda entrada do usuário
  numero1 = Serial.parseFloat();
  Serial.read(); // Limpa o buffer
  
  Serial.println("Digite o segundo numero:");
  while(!Serial.available()) {}
  numero2 = Serial.parseFloat();
  Serial.read(); // Limpa o buffer
  
  // Compara os dois números
  if(numero1 > numero2) {
    Serial.print(numero1, 2);
    Serial.print(" eh maior que ");
    Serial.println(numero2, 2);
  } 
  else if(numero2 > numero1) {
    Serial.print(numero2, 2);
    Serial.print(" eh maior que ");
    Serial.println(numero1, 2);
  }
  else {
    Serial.println("os numeros sao iguais!");
  }
  
  Serial.println("--------------------------");
  delay(3000); // Espera 3 segundos antes de reiniciar
}