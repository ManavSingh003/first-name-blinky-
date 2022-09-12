
void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

int unit_delay = 250;
void dot()
{
digitalWrite(LED_BUILTIN, HIGH);
delay(unit_delay);
digitalWrite(LED_BUILTIN, LOW);
delay(unit_delay);
}
void dash()
{
digitalWrite(LED_BUILTIN, HIGH);
delay(unit_delay * 3);
digitalWrite(LED_BUILTIN, LOW);
delay(unit_delay);
}


void loop() {
  // put your main code here, to run repeatedly:


  //M
  dash();
  dash();
  delay(850);
  
  //A
  dot();
  dash();
  delay(850);
  
  //N
  dash();
  dot();
  delay(850);
  
  //A
  dot();
  dash();
  delay(850);
  
  //V
  dot();
  dot();
  dot();
  dash();
  delay(850);
  
}
