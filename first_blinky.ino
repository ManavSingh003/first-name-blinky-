// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

   //for A :- 
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);   

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for 4 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  

     //for A :- 
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);   

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for 4 second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  

  //for R:-
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);   

  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for 4 second
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
