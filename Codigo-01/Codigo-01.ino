// Definição dos pinos dos LEDs
const int ledVermelho = 2;
const int ledVerde = 3;
const int ledAmarelo = 4;

void setup() {
  // Configuração dos pinos como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
}

void loop() {
  // Liga o LED vermelho por 2 segundos
  digitalWrite(ledVermelho, HIGH);
  delay(2000); // Espera por 2 segundos
  digitalWrite(ledVermelho, LOW);

  // Liga o LED verde por 2 segundos
  digitalWrite(ledVerde, HIGH);
  delay(2000); // Espera por 2 segundos
  digitalWrite(ledVerde, LOW);

  // Liga o LED amarelo por 2 segundos
  digitalWrite(ledAmarelo, HIGH);
  delay(2000); // Espera por 2 segundos
  digitalWrite(ledAmarelo, LOW);
}