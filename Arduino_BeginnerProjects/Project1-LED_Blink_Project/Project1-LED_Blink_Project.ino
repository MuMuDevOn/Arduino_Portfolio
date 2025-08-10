void setup() {
  // put your setup code here, to run once:
   pinMode(7,OUTPUT);//This tells the arnuidio board which pin I'm using 
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,HIGH);//sets pin voltage to 5V (on most boards)
  delay(5000);//This is pause the funtion for 5 seconds
  digitalWrite(7,LOW);// sets pin voltage to 0V
  delay(2500); //this will pause the function for 2,5 seconds
}
