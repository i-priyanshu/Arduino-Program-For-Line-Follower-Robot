
int motorpin1=7;
int motorpin2=6;
int irpin1=12;
int motorpin3=5;
int motorpin4=4;
int irpin2=13;
int pwm1=3;
int pwm2=11;
int value1=0,value2=0;
int motorspeed=170;

void setup() {
  // put your setup code here, to run once:
pinMode( motorpin1,OUTPUT);
pinMode( motorpin2,OUTPUT);
pinMode( motorpin3,OUTPUT);
pinMode( motorpin4,OUTPUT);
pinMode( pwm1,OUTPUT);
pinMode( pwm2,OUTPUT);
pinMode(irpin1,INPUT);
pinMode(irpin2,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 value1=digitalRead(irpin1);
 value2=digitalRead(irpin2);
 if(value1!=1 && value2!=1)
  {
    analogWrite(pwm1,motorspeed-40);
    analogWrite(pwm2,motorspeed-40);
    digitalWrite(motorpin1,HIGH); 
    digitalWrite(motorpin2,LOW);
    digitalWrite(motorpin3,HIGH); 
    digitalWrite(motorpin4,LOW);  
     
  }
 else if(value1==1)
  {
    
    analogWrite(pwm1,motorspeed-10);
    analogWrite(pwm2,motorspeed-10);
   digitalWrite(motorpin1,HIGH); 
   digitalWrite(motorpin2,LOW);
    digitalWrite(motorpin3,LOW); 
     digitalWrite(motorpin4,HIGH);  
     
  }
  else if(value2==1)
  {
    
    analogWrite(pwm1,motorspeed-10);
    analogWrite(pwm2,motorspeed-10);
     digitalWrite(motorpin1,LOW) ;
   digitalWrite(motorpin2,HIGH);
    digitalWrite(motorpin3,HIGH); 
     digitalWrite(motorpin4,LOW) ;  
  }


}
