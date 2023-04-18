int led = 2;
int increment = 5;
int delai = 50;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    for (int i = 0; i <= 255; i += increment) {
    analogWrite(led, i); 
    delay(delai); 
    }
}