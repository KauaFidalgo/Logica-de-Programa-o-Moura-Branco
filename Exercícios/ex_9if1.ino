// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  float salario;
  
  Serial.println("\nDigite o salario do funcionario (R$):");
  while(!Serial.available()) {} // Aguarda entrada do usuário
  salario = Serial.parseFloat();
  Serial.read(); // Limpa o buffer
  
  // Verifica se o salário é menor que 500
  if(salario < 500) {
    float novo_salario = salario * 1.30; // Aumento de 30%
    Serial.print("Salario reajustado (+30%): R$ ");
    Serial.println(novo_salario, 2); // Exibe com 2 casas decimais
  } else {
    Serial.println("Este funcionario nao tem direito ao aumento.");
    Serial.print("Salario atual: R$ ");
    Serial.println(salario, 2);
  }
  
  delay(2000); // Espera 2 segundos antes de reiniciar
}