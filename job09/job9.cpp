int leds[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
int delai = 100; 

void setup() {
    for (int i = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
    } 
}

void loop() {
    for (int i = 0; i < 8; i++) {
    digitalWrite(leds[i], HIGH); 
    delay(delai); 
    digitalWrite(leds[i], LOW);
    }
}