/*
Tabuada - Desafio

*/
int numeroEscolhido;
int tabuadaEscolhida;
int contador;


void setup() {
  Serial.begin(9600);
  Serial.println("Tabuada (1-10):");
}

void loop() {
  if(Serial.available()) {
    
    int numeroEscolhido = Serial.parseInt();
    
    if(numeroEscolhido>=1 && numeroEscolhido<=10) {
      
        for(int tabuadaEscolhida=1; tabuadaEscolhida<=10; tabuadaEscolhida++) {
        Serial.println(String(numeroEscolhido)+" x "+tabuadaEscolhida+" = "+(numeroEscolhido*tabuadaEscolhida));
      }
    }
  }
}