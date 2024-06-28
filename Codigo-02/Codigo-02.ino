// Definição dos pinos dos LEDs
const int ledVermelho = 2;
const int ledVerde = 3;
const int ledAmarelo = 4;

void setup() {
  // Configuração dos pinos como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);

  // Iniciando a comunicação serial
  Serial.begin(9600);
  Serial.println("Digite 'r' para acender o LED vermelho, 'g' para o LED verde, 'y' para o LED amarelo e 'o' para apagar todos.");
}

void loop() {
  // Verifica se há dados disponíveis na porta serial
  if (Serial.available() > 0) {
    // Lê o caractere recebido
    char comando = Serial.read();

    // Controla os LEDs com base no comando recebido
    switch (comando) {
      case 'r':
        digitalWrite(ledVermelho, HIGH);
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        Serial.println("LED vermelho aceso.");
        break;
      case 'g':
        digitalWrite(ledVermelho, LOW);
        digitalWrite(ledVerde, HIGH);
        digitalWrite(ledAmarelo, LOW);
        Serial.println("LED verde aceso.");
        break;
      case 'y':
        digitalWrite(ledVermelho, LOW);
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, HIGH);
        Serial.println("LED amarelo aceso.");
        break;
      case 'o':
        digitalWrite(ledVermelho, LOW);
        digitalWrite(ledVerde, LOW);
        digitalWrite(ledAmarelo, LOW);
        Serial.println("Todos os LEDs apagados.");
        break;
      default:
        break;
    }
  }
}
