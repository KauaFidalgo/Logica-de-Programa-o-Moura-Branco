// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  float precoCompra, percentual;
  float precoVenda;
  
  Serial.println("\n--- Calculadora de Precos de Venda ---");
  
  // Solicita o preço de compra
  Serial.println("Digite o preco de compra do produto (R$):");
  while(!Serial.available()) {} // Aguarda entrada
  precoCompra = Serial.parseFloat();
  Serial.read(); // Limpa o buffer
  
  // Solicita o percentual de margem
  Serial.println("Digite o percentual de margem a ser aplicado (%):");
  while(!Serial.available()) {}
  percentual = Serial.parseFloat();
  Serial.read(); // Limpa o buffer
  
  // Calcula o preço de venda
  precoVenda = precoCompra * (1 + percentual/100);
  
  // Exibe os resultados
  Serial.print("\nPreco de compra: R$ ");
  Serial.println(precoCompra, 2);
  
  Serial.print("Percentual de margem: ");
  Serial.print(percentual, 1);
  Serial.println("%");
  
  Serial.print("Preco de venda: R$ ");
  Serial.println(precoVenda, 2);
  
  // Verifica se a margem é pequena
  if(percentual < 50) {
    Serial.println("\nATENCAO: O produto sera vendido com uma margem muito pequena de lucro!");
    Serial.println("(Percentual inferior a 50%)");
  } else {
    Serial.println("\nMargem de lucro adequada.");
  }
  
  Serial.println("\n------------------------------------");
  delay(3000); // Espera 3 segundos antes de reiniciar
}