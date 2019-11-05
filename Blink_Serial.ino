void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  if(Serial.available()) {
  String c = Serial.readString();
  if (c == "ON" ) {
  digitalWrite(LED_BUILTIN, HIGH);
  } 
  else if ( c == "OFF") {
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  }
  }
}
