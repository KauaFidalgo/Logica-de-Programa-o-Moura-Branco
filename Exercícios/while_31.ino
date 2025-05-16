// C++ code
//
void setup() {
  Serial.begin(9600); // Inicia a comunicação serial
  Serial.println("Contagem de 5 em 5 (0 a 50):");
  Serial.println("--------------------------");
}

void loop() {
  int numero = 0; // Começa em 0
  
  // Laço while para contar de 5 em 5 até 50
  while (numero <= 50) {
    Serial.println(numero); // Mostra o número atual
    
    // Formatação especial para números menores que 10
    if (numero < 10) {
      Serial.print(" "); // Adiciona um espaço para alinhamento
    }
    
    Serial.println(numero); // Mostra o número formatado
    
    numero += 5; // Incrementa de 5 em 5
    delay(500); // Pausa de meio segundo entre os números
  }
  
  Serial.println("--------------------------");
  Serial.println("Fim da contagem!");
  delay(3000); // Aguarda 3 segundos antes de reiniciar
  
  // Reinicia a contagem
  numero = 0;
}