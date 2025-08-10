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
digitalWrite(7, HIGH);  // turn the LED on (HIGH is the voltage level)(Red led light will be on)
  delay(5000);                      // wait for 5 second
  digitalWrite(7, LOW); // turn the red LED off by making the voltage LOW
  digitalWrite(5, HIGH);//Switch the yellow LED
  delay(1000); //wait for 1 second
   digitalWrite(5, LOW);   //Switch of yellow LED
  digitalWrite(3, HIGH); // Turn on Green LED Lights 
  delay(5000); //Wait(Delay) for 5 seconds
  digitalWrite(3, LOW); //Switch of the Green LED lights

}


