int led1 = 13;
int led2 = 12;
int delai1 = 500;
int delai2 = 250;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void loop() {
    digitalWrite(led1, HIGH);
    delay(delai1);
    digitalWrite(led1, LOW);
    delay(delai2);
    digitalWrite(led2, HIGH);
    delay(delai1);
    digitalWrite(led2, LOW);
    delay(delai2);
}