
// pisca aleatoreamente um dos quatro leds

long a; 
int Pinos[] = {9,10,11,12};
int timer =500;
int contador=0;

void setup() {
  for (contador = 0; contador < 4; contador++) {
   pinMode(Pinos[contador], OUTPUT);
 }  
}
void loop() {
  a=random(0,4);
  digitalWrite(Pinos[a],HIGH);
  delay(timer);
  digitalWrite(Pinos[a], LOW);
  delay(timer);
  }

  
