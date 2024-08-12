const int ledCount = 10; 
int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; 

void setup() {
  // Initialize each LED pin as an output
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  // Light up LEDs from left to right
  for (int i = 0; i < ledCount; i++) {
    digitalWrite(ledPins[i], HIGH); // Turn on LED
    delay(100); // Wait for 100 milliseconds
  }

  // Turn off LEDs from right to left
  for (int i = ledCount - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW); // Turn off LED
    delay(100); // Wait for 100 milliseconds
  }
}
