int analogPin = A0; // potentiometer wiper (middle terminal) connected 
                    // to analog pin 3 outside leads to ground and +5V
int val = 0;        // variable to store the value read
float vbat = 0.0;

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  val = analogRead(analogPin);  // Read analog value from input pin (0 to 1023)
  vbat = float(val);
  vbat = 10.0*vbat/1024.0;      // Convert to voltage is divided by 2
  Serial.println(vbat);
  delay(1000);
}
