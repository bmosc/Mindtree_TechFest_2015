void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  int a = 0;
  if (sensorValue <= 400) a = 0;
  else if (sensorValue >= 700) a = 1;
  else a = 2;
  Serial.println(a);
  delay(40);
}
