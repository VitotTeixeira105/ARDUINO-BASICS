// DECLARAÇÃO DE VARIAVEIS/CONSTANTES
const int LED = 2;

// DEFENIR LED COMO OUTPUT
void setup() {
  pinMode(LED, OUTPUT); 
}

// FUNÇÃO PISCA LED, LIGA - DESLIGA A CADA 1 SEGUNDO
void piscaLed(int thing) {
  digitalWrite(thing, HIGH);
  delay(1000);
  digitalWrite(thing, LOW);
  delay(1000);
}

// CHAMAMENTO DA FUNÇÃO NO VOID LOOP
void loop() {
  piscaLed(LED);
}
