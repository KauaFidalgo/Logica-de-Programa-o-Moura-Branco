// C++ code
//
void setup() {
  Serial.begin(9600);
  Serial.println("Teste de Matematica");
  
  int a = random(1, 6); // Número entre 1-5
  int b = random(1, 6); // Número entre 1-5
  int resultadoCorreto = a + b;
  int respostaUsuario;
  
  do {
    Serial.print("\nQuanto eh ");
    Serial.print(a);
    Serial.print(" + ");
    Serial.print(b);
    Serial.println("?");
    
    while(!Serial.available());
    respostaUsuario = Serial.parseInt();
    
    while(Serial.available()) Serial.read();
    
    if(respostaUsuario == resultadoCorreto) {
      Serial.println("Parabens! Resposta correta!");
    } else {
      Serial.println("Resposta incorreta!");
    }
  } while(respostaUsuario != resultadoCorreto);
}

void loop() {}