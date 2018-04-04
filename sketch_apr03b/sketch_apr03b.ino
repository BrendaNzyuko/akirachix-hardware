#include <Servo.h>
Servo myservo;


void setup() {
  // put your setup code here, to run once:
//  Serial.begin(19200);
  
//  pinMode(13,OUTPUT);
//  digitalWrite(13,LOW);

Serial.begin(19200);
myservo.attach(13);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    char ch = Serial.read();
    Serial.write(ch);
    if (ch =='1'){
      myservo.write(180);
    }
    if (ch =='0'){
      myservo.write(0);
    }
  }
  }
// if(Serial.available()>0){
  
//    Serial.print(Serial.read()); 
//   char ch =Serial.read();
//    Serial.print(ch);
     
//    if (ch =='1'){
//      digitalWrite(13,HIGH);
//    }
    
//  if (ch =='0'){
//  digitalWrite(13,LOW);}
//}
//}
