int led_blue = 8;
int led_green = 13;
int button = 7;

void setup() {
  pinMode(led_blue,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button) == LOW) {
    digitalWrite(led_blue,HIGH);
    digitalWrite(led_green,LOW);
    delay(500);
    digitalWrite(led_blue,LOW);
    digitalWrite(led_green,HIGH);
    delay(500);
  } else {
    digitalWrite(led_green,LOW);
    digitalWrite(led_blue,LOW);
  }
}
