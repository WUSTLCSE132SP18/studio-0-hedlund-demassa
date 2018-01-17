void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

  
}

void loop() {
  delay(1000);
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  
  int time = (millis()+10)/1000;
  Serial.print(time);
  Serial.println(" sec have elapsed");
}

