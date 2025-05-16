int chooseOfOperation;
float resultado; //ira guardar o resultado do calculo da respectiva operação



//ESTRUTURA: tipo de retorno nomedafuncao parametros corpo
float somar(float number1Param, float number2Param){
  resultado = number1Param + number2Param;
  return resultado;
  //Serial.println("The results of your count is:" + String(resultado));      
}

float dividir(float number1Param, float number2Param){
  resultado = number1Param / number2Param;
  return resultado;
}

float subtrair(float number1Param, float number2Param){
  resultado = number1Param - number2Param;
  return resultado;
}

float multiplicar(float number1Param, float number2Param){
  resultado = number1Param * number2Param;
  return resultado;
}

void setup()
{
  Serial.begin(9600);
  
  int counter = 0; //variavel inicializadora do Do while
  float number1;  //variavel local 
  float number2;
  
  do{
     Serial.println("------------------------------------");
     Serial.println("Wellcome a davi clapote calculation ;) ");
     Serial.println("------------------------------------");
     Serial.println("Choose one of this four operations: ");
     Serial.println("1 - Somar");
     Serial.println("2 - Dividir");
     Serial.println("3 - Subtrair");
     Serial.println("4 - Multiplicar");
     while(!Serial.available()){}
     chooseOfOperation = Serial.parseInt();
    
    
    
    Serial.println("For conseguirmos fazer at operation com this davi calculation, write 2 number: ");
    Serial.println("Write the 1 number for davi see: ");
    while(!Serial.available()){}
    number1 = Serial.parseFloat();

    Serial.println("Write the 2 number for davi see: ");
    while(!Serial.available()){}
    number2 = Serial.parseFloat();
    
    //if(chooseOfOperation == 1){}
    //else if (chooseOfOperation == 2){}
    //else if (chooseOfOperation == 3){}
    //else if (chooseOfOperation == 4){}
    //else{} // else n tem condição

    switch(chooseOfOperation){
    	case 1:
      //somar(number1, number2);
      //somar(number1);
      float retornoFuncaoSomar;
      retornoFuncaoSomar = somar(number1, number2);
      Serial.println("The results of your count is: " + String(retornoFuncaoSomar));
      
           break;
		case 2:
     float retornoFuncaoDividir;
      retornoFuncaoDividir = dividir(number1, number2);
      Serial.println("The results of your count is: " + String(retornoFuncaoDividir));

         	break;
    	case 3:
      float retornoFuncaoSubtrair;
      retornoFuncaoSubtrair = subtrair(number1, number2);
      Serial.println("The results of your count is: " + String(retornoFuncaoSubtrair));

      		break;
    	case 4:
       float retornoFuncaoMultiplicar;
      retornoFuncaoMultiplicar = multiplicar(number1, number2);
      Serial.println("The results of your count is: " + String(retornoFuncaoMultiplicar));

        	break;
 
        default: 
 	      Serial.println("Choose incorrect! Choose operation in 1 at 4. ;)");
    }
    
    
    Serial.println("You want to back for main? Yes or No (write : Yes, No)");
    while(!Serial.available()){}
    
    
    if(Serial.readString() == "Yes"){
      counter = 1;
    }
    else{
     counter = 0;
      
	 Serial.println("See you again!!!");
     Serial.println("For you want to back for main, restart the program ;)");
      
    }
    
  }
  while(counter != 0); //se o contador foi diferente de 0, o mesmo repete.
  
}
void loop()
{
  //sem instruções
}