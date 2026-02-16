const int ledPin1 = 13;  // Первый светодиод
const int ledPin2 = 12;  // Второй светодиод

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // Основной режим - попеременное мигание
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(500);
  
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(500);
  
  // Вызов функции SOS (пока закомментировано)
  // blinkSOS();
}

// НОВАЯ ФУНКЦИЯ: сигнал SOS азбукой Морзе
void blinkSOS() {
  // Буква S: три коротких сигнала
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(200);
    digitalWrite(ledPin1, LOW);
    delay(200);
  }
  
  delay(300);  // Пауза между буквами
  
  // Буква O: три длинных сигнала
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(600);
    digitalWrite(ledPin1, LOW);
    delay(200);
  }
  
  delay(300);  // Пауза между буквами
  
  // Буква S: три коротких сигнала
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin1, HIGH);
    delay(200);
    digitalWrite(ledPin1, LOW);
    delay(200);
  }
  
  delay(2000);  // Пауза перед повторением
}