/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR3000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int i =0;i<5;i++)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);                    
    digitalWrite(LED_BUILTIN, LOW);  
    delay(200); 
    digitalWrite(12, HIGH);
    delay(200);                    
    digitalWrite(12, LOW);  
    delay(200); 
    digitalWrite(11, HIGH);
    delay(200);                    
    digitalWrite(11, LOW);  
    delay(200);   
    digitalWrite(10, HIGH);
    delay(200);                    
    digitalWrite(10, LOW);  
    delay(200);    
    digitalWrite(9, HIGH);
    delay(200);                    
    digitalWrite(9, LOW);  
    delay(200); 
    digitalWrite(8, HIGH);
    delay(200);                    
    digitalWrite(8, LOW);  
    delay(200);
  }                  
}
