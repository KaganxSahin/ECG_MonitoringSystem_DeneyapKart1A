void setup() {
    Serial.begin(9600);
    pinMode(D1, INPUT); // LO+
    pinMode(D0, INPUT); // LO-
  }
  
void loop() {
  if ((digitalRead(D1) == 1) || (digitalRead(D0) == 1)) {
    Serial.println('!');
  } else {
    Serial.println(analogRead(A0));
  }
  delay(20);
}
  