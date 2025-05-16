// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
}

void loop() {
  int opcao;
  
  do {
    // Exibe o menu
    Serial.println("\n=== ROBO DE ATENDIMENTO ===");
    Serial.println("1 - Ver telefone");
    Serial.println("2 - Ver endereco");
    Serial.println("3 - Sair");
    Serial.println("Digite sua opcao:");
    
    // Aguarda a entrada do usuário
    while(!Serial.available());
    opcao = Serial.parseInt();
    
    // Limpa o buffer serial
    while(Serial.available()) {
      Serial.read();
    }
    
    // Processa a opção selecionada
    switch(opcao) {
      case 1:
        Serial.println("\nTELEFONE: (11) 7070-7070");
        break;
      case 2:
        Serial.println("\nENDERECO: Rua Niteroi 180 – Sao Caetano do Sul – SP.");
        break;
      case 3:
        Serial.println("\nObrigado por usar nosso servico!");
        break;
      default:
        Serial.println("\nOpcao invalida! Digite 1, 2 ou 3.");
    }
    
    delay(1000); // Pequena pausa entre as operações
    
  } while(opcao != 3); // Repete até o usuário escolher sair
  
  Serial.println("Programa encerrado. Pressione RESET para recomecar.");
  while(1); // Mantém o programa parado até reset
}