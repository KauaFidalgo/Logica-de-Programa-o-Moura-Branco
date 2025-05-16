// C++ code
//
void setup() {
  Serial.begin(9600);
}

void loop() {
  const int SENHA_CORRETA = 1234; // Senha definida
  int tentativas = 0;
  bool bloqueado = false;
  unsigned long tempoBloqueio = 0;

  do {
    if (bloqueado) {
      // Verifica se já passaram 2 minutos (120000 ms)
      if (millis() - tempoBloqueio >= 120000) {
        bloqueado = false;
        tentativas = 0;
        digitalWrite(LED_BUILTIN, LOW);
        Serial.println("\nSistema desbloqueado. Tente novamente.");
      } else {
        Serial.println("\nSistema bloqueado. Aguarde 2 minutos.");
        delay(1000); // Evita flood na serial
        continue;
      }
    }

    Serial.println("\nDigite a senha de 4 digitos:");
    while (!Serial.available()); // Aguarda entrada
    
    int senha = Serial.parseInt();
    
    // Limpa o buffer serial
    while (Serial.available()) {
      Serial.read();
    }

    if (senha == SENHA_CORRETA) {
      Serial.println("\nLogin efetuado com sucesso!");
      Serial.println("Bem-vindo ao sistema!");
      delay(2000);
      break; // Sai do loop quando acerta
    } else {
      tentativas++;
      Serial.println("\nSenha incorreta. Tente novamente!");
      
      if (tentativas >= 3) {
        bloqueado = true;
        tempoBloqueio = millis();
        digitalWrite(LED_BUILTIN, HIGH);
        Serial.println("3 tentativas erradas. Sistema bloqueado por 2 minutos!");
      }
    }
  } while (true); // Loop infinito (sai apenas com login correto)
  
  // Aqui iria o código do sistema após login
  // ...
  
  // Quando terminar, reinicia o login
  Serial.println("\nSessao encerrada. Reiniciando...");
  delay(2000);
}