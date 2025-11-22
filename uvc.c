// Pins
const int relayPin = 7;       // Relay control pin
const int waterPurifiedPin = 2;  // Digital input pin for water purification sensor or button
const int ledPin = 13;        // Optional LED indicator

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(waterPurifiedPin, INPUT_PULLUP); // Using button or sensor
  digitalWrite(relayPin, LOW); // Relay OFF initially
}

void loop() {
  // Check if water is purified (button pressed or sensor HIGH)
  if (digitalRead(waterPurifiedPin) == LOW) {  // assuming button press closes circuit
    digitalWrite(relayPin, HIGH); // Turn ON relay → UVC ON
    digitalWrite(ledPin, HIGH);   // LED ON
  } else {
    digitalWrite(relayPin, LOW);  // Relay OFF → UVC OFF
    digitalWrite(ledPin, LOW);    // LED OFF
  }
}
