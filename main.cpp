#define TOUCH_PIN 2
#define LED_PIN 13

void setup() {
  Serial.begin(9600);
  pinMode(TOUCH_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.println("Touch Sensor LED Control System Ready");
}

void loop() {
  int touchState = digitalRead(TOUCH_PIN);

  if (touchState == HIGH) {
    Serial.println("Touch Detected - LED ON");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("No Touch - LED OFF");
    digitalWrite(LED_PIN, LOW);
  }

  delay(100);
}