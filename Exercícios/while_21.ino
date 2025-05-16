// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  
  // Mensagem inicial
  Serial.println("Contagem personalizada");
  Serial.println("Digite um numero (N) e pressione ENTER:");
  Serial.println("O programa mostrara de 0 ate N");
}

void loop() {
  if (Serial.available() > 0) { // Verifica se o usuário digitou algo
    int N = Serial.parseInt(); // Lê o número digitado
    
    // Limpa o buffer serial
    while (Serial.available() > 0) {
      Serial.read();
    }
    
    if (N > 0) { // Verifica se o número é válido
      Serial.print("\nContando de 0 ate ");
      Serial.println(N);
      Serial.println("------------------");
      
      int contador = 0; // Inicia o contador em 0
      
      // Laço while para contar de 0 até N
      while (contador <= N) {
        Serial.println(contador); // Mostra o número atual
        contador++; // Incrementa o contador
        delay(200); // Pequena pausa para melhor visualização
      }
      
      Serial.println("\nFim da contagem!");
      Serial.println("Digite um novo numero para repetir:");
    } else {
      Serial.println("Numero invalido! Digite um numero positivo.");
    }
  }
}