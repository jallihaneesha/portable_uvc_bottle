#define RELAY_PIN 7  // Relay IN connected to Arduino Pin 7

void setup() {
  pinMode(RELAY_PIN, OUTPUT);  // Set relay pin as output
}

void loop() {
  digitalWrite(RELAY_PIN, HIGH);  // Keep relay ON continuously → LEDs glow
  // No delay needed; loop repeats continuously
}
