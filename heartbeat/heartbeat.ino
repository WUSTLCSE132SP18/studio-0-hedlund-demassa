void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  int time = (millis()+10)/1000;
  Serial.print(time);
  Serial.println(" sec have elapsed");
}

