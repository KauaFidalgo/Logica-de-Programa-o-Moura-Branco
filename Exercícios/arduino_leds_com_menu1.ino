// C++ code
//

//definição dos pinos dos leds

int ledVerde = 13;
int ledAmarelo = 12;
int ledVermelho = 8;

void setup() {
  //configuração dos pinos dos led como saída
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  
  Serial.begin(9600);
  
  //inicia todos os led apagados
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, LOW);
}

void loop() {
  int opcao;
  
  do {
    //exibe o menu
    Serial.println();//pula uma linha
    Serial.println("=== CONTROLE DE LEDs ===");
    Serial.println();//pula uma linha
    Serial.println("1) Ligar Led Verde");
    Serial.println("2) Desligar Led Verde");
    Serial.println("3) Ligar Led Amarelo");
    Serial.println("4) Desligar Led Amarelo");
    Serial.println("5) Ligar Led Vermelho");
    Serial.println("6) Desligar Led Vermelho");
    Serial.println("7) Ligar Todos os Leds");
    Serial.println("8) Desligar Todos os Leds");
    Serial.println("0) Sair");
    Serial.println("Digite sua opcao:");

    //aguarda entrada do usuário
    while(!Serial.available());
    opcao = Serial.parseInt();

    // processa a opção selecionada
    switch(opcao) {
      case 1:
        digitalWrite(ledVerde, HIGH);
        Serial.println("Led Verde LIGADO");
        break;
      case 2:
        digitalWrite(ledVerde, LOW);
        Serial.println("Led Verde DESLIGADO");
        break;
      case 3:
        digitalWrite(ledAmarelo, HIGH);
        Serial.println("Led Amarelo LIGADO");
        break;
      case 4:
        digitalWrite(ledAmarelo, LOW);
        Serial.println("Led Amarelo DESLIGADO");
        break;
      case 5:
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Led Vermelho LIGADO");
        break;
      case 6:
        digitalWrite(ledVermelho, LOW);
        Serial.println("Led Vermelho DESLIGADO");
        break;
      case 7:
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, HIGH);
        digitalWrite(ledVermelho, HIGH);
        Serial.println("Todos os LEDs LIGADOS");
        break;
      case 8:
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        digitalWrite(ledVermelho, LOW);
        Serial.println("Todos os LEDs DESLIGADOS");
        break;
      case 0:
        Serial.println("Saindo do programa...");
        break;
      default:
        Serial.println("Opcao invalida! Tente novamente.");
    }
    
  } while(opcao != 0); //repete até o usuário escolher sair

  
  
  
  
  
  
  
  // Encerra o programa
  while(true) {
    delay(1000); // Mantém o programa parado
  }
}