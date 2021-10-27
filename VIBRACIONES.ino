int LedPin = 13;

int Sensor = A0;
 
void setup() {
  pinMode(LedPin, OUTPUT);
}
 
void loop() {
  if (digitalRead(Sensor) == 1) {
    digitalWrite(LedPin, HIGH);
    delay(3000);
  }
  else
  {
    digitalWrite(LedPin, LOW);
  }
}
 
