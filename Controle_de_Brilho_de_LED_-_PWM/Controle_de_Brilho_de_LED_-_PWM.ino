// Projeto Controle de Brilho de LED - PWM 
// Epaminondas Lage
int ledPin = 11; 
float sinVal; 
int ledVal;   
void setup() 
{ 
  pinMode(ledPin, OUTPUT); 
} 
void loop() 
{ 
  for (int x=0; x<180; x++) 
  { 
    // converte graus para radianos e então obtém o valor do seno 
    sinVal = (sin(x*(3.1412/180))); 
    ledVal = int(sinVal*255); 
    analogWrite(ledPin, ledVal); 
    delay(50); 
  } 
} 

