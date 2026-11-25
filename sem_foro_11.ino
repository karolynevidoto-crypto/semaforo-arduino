const int VERMELHO = 12;
const int AMARELO = 11;
const int VERDE = 10;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  // Acende o vermelho por 3 segundos
  digitalWrite(VERMELHO, HIGH);
  delay(3000);
  digitalWrite(VERMELHO, LOW);
  
  // Acende o amarelo por 3 segundos
  digitalWrite(AMARELO,HIGH);
  delay(3000);
  digitalWrite(AMARELO, LOW);
  
  // Acende o verde por 3  segundos
  digitalWrite(VERDE, HIGH);
  delay(3000);
  digitalWrite(VERDE, LOW);
}