const int VERMELHO = 12;
const int AMARELO = 11;
const int VERDE = 10;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  // Acende o vermelho por 5 segundos
  digitalWrite(VERMELHO, HIGH);
  delay(5000);
  digitalWrite(VERMELHO, LOW);
  
  // Acende o amarelo por 2 segundos
  digitalWrite(AMARELO,HIGH);
  delay(2000);
  digitalWrite(AMARELO, LOW);
  
  // Acende o verde por 4  segundos
  digitalWrite(VERDE, HIGH);
  delay(4000);
  digitalWrite(VERDE, LOW);
}
