int ena = 11;
int enb = 3;
int trigPin = 9;
int echoPin = 10;
int revright = 4;      //REVerse motion of Right motor
int fwdleft = 7;      
int revleft= 6;       
int fwdright= 5;       //ForWarD motion of Right motor
int c = 0;

void setup() {
  //Serial.begin(9600); 
   pinMode(ena, OUTPUT);
   pinMode(enb, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
 
  
  if((distance<30))
 {
//stop
   digitalWrite(5,LOW);                               //       If you dont get proper movements of your robot,
   digitalWrite(4,LOW);                               //        then alter the pin numbers
   digitalWrite(6,LOW);                               //
   digitalWrite(7,LOW);                              //
delay(500);

//reverse
   digitalWrite(5,LOW);                               //       If you dont get proper movements of your robot,
   digitalWrite(4,HIGH);                               //        then alter the pin numbers
   digitalWrite(6,LOW);                               //
   digitalWrite(7,HIGH);                              //
delay(500);

//stop
   digitalWrite(5,LOW);                               //       If you dont get proper movements of your robot,
   digitalWrite(4,LOW);                               //        then alter the pin numbers
   digitalWrite(6,LOW);                               //
   digitalWrite(7,LOW);                              //
delay(500);


//right/left
  digitalWrite(5,HIGH);                               //       If you dont get proper movements of your robot,
   digitalWrite(4,LOW);                               //        then alter the pin numbers
   digitalWrite(6,LOW);                               //
   digitalWrite(7,LOW);                              //
   delay(500);
 }
 
  else
 {

    analogWrite(ena, 127);
    analogWrite(enb, 127);
   digitalWrite(5,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(6,LOW);                                  //HIGH
   digitalWrite(7,HIGH);
                                            
 }
 
}
