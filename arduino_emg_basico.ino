const int PIN_EMG = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorEMG = analogRead(PIN_EMG);
  Serial.println(valorEMG);
  delay(10);
}
