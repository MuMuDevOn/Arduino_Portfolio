// the setup function runs once when you press reset or power the board
void setup() {
  // put your setup code here, to run once:
// initialize digital pin LED_BUILTIN as an output.
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);                      // wait for a second
  digitalWrite(7, LOW); // turn the LED off by making the voltage LOW
  digitalWrite(5, HIGH);
  delay(1000);
   digitalWrite(5, LOW);   
  digitalWrite(3, HIGH); // wait for a second
  delay(5000); 
  digitalWrite(3, LOW); 

}


