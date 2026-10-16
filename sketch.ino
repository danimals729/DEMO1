// Arduino LED chaser
// Lights up 4 LEDs on pins 1-5 one by one, and it will be turned off in reverse

const int ledPins[] = {2, 3, 4, 5, 6};
const int numLeds = 5;
const int delayTime = 300; // This is represented in milliseconds

void setup() {
    for(int i = 0; i < numLeds; i++){
        pinMode(ledPins[i], OUTPUT);
        digitalWrite(ledPins[i], LOW); // LEDs will be off at the very start 
    }
}

void loop() {
    for(int i = 0; i < numLeds; i++) {
        digitalWrite(ledPins[i], HIGH);
        delay(delayTime);
    }

    delay(delayTime);

    for(int i = numLeds - 1; i >= 0; i--) {
        digitalWrite(ledPins[i], LOW);
        delay(delayTime);
    }

    delay(delayTime);
}