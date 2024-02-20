int analogPin = A0; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  int val = analogRead(analogPin);  // read the input pin
  Serial.println(val);          // debug value
  int form = (int)((float)val/1023*9);
  Serial.print("Raw: ");Serial.println(val);
  Serial.print("0-9: ");Serial.println(form);
  delay(100);
}