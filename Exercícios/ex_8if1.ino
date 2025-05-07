// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  String nome, cargo;
  float salario;
  
  Serial.println("Digite o nome do funcionario:");
  while(!Serial.available()) {} // Aguarda entrada
  nome = Serial.readStringUntil('\n');
  
  Serial.println("Digite o cargo do funcionario:");
  while(!Serial.available()) {}
  cargo = Serial.readStringUntil('\n');
  
  Serial.println("Digite o salario do funcionario:");
  while(!Serial.available()) {}
  salario = Serial.parseFloat();
  Serial.read(); // Limpa o buffer
  
  // Verifica se o salário é menor que 1000
  if(salario < 1000) {
    salario = salario * 1.10; // Aumento de 10%
    Serial.println("Salario ajustado (+10%)");
  }
  
  // Exibe os resultados
  Serial.println("\nDados do funcionario:");
  Serial.print("Nome: ");
  Serial.println(nome);
  Serial.print("Cargo: ");
  Serial.println(cargo);
  Serial.print("Salario: R$ ");
  Serial.println(salario, 2); // Exibe com 2 casas decimais
  
  Serial.println("\n-----------------------\n");
  delay(2000); // Espera 2 segundos antes de reiniciar
}