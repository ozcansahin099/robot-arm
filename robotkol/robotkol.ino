#include <Servo.h>    

Servo myservo1;
Servo myservo2;
int potpin1 = 0;
int potpin2=1;
int val1;
int val2;
void setup()  {    
  myservo1.attach(8);
   myservo2.attach(9);  
}   
void loop()  {
  val1 = analogRead(potpin1);      
  val1 = map(val1, 0, 900, 0, 179);        
  myservo1.write(val1);                    
  delay(15);
  val2 = analogRead(potpin2);      
  val2 = map(val2, 0, 900, 0, 179);        
  myservo2.write(val2);                    
  delay(15);                      
}

