void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, OUTPUT);
}

void loop() {
  Serial.print(".");
  digitalWrite(4, HIGH);
  delay(60000); // 60s
  digitalWrite(4, LOW);
  delay(30000); // 30s
}
