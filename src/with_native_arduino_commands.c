// Program for building a traffic light in which the closed signal stays for 5s,
// the attention signal is 2s and the open signal is 5s.

// Using native Arduino commands
int PIN_LED_RED = 4;
int PIN_LED_YELLOW = 5;
int PIN_LED_GREEN = 6;

void setup()
{
  pinMode(PIN_LED_RED, OUTPUT);
  pinMode(PIN_LED_YELLOW, OUTPUT);
  pinMode(PIN_LED_GREEN, OUTPUT);
}

void loop()
{
  // closed sign
  digitalWrite(PIN_LED_RED, HIGH);
  delay(5000); // 5 seconds
  
  // attention sign
  digitalWrite(PIN_LED_RED, LOW);
  digitalWrite(PIN_LED_YELLOW, HIGH);
  delay(2000); // 2 seconds
  digitalWrite(PIN_LED_YELLOW, LOW);
  
  // open signal
  digitalWrite(PIN_LED_GREEN, HIGH);
  delay(5000); // 5 seconds
  digitalWrite(PIN_LED_GREEN, LOW);
}