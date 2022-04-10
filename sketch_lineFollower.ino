#define Motor1 7
 #define Motor2 6
 #define Motor3 8
 #define Motor4 9
 #define PWMmotor1 5
 #define PWMmotor2 10
 
 int valuePWM1=115; // speed motor 1 
 int valuePWM2=145; // speed motor 2
 
void setup() {
  
  pinMode(Motor1,OUTPUT);
  pinMode(Motor2,OUTPUT);
  pinMode(Motor3,OUTPUT);
  pinMode(Motor4,OUTPUT);
  pinMode(PWMmotor1,OUTPUT);
  pinMode(PWMmotor2,OUTPUT);
 
pinMode(A0, INPUT); // initialize Right sensor as an inut
pinMode(A1, INPUT); // initialize Left sensor as as input
 
}
 
void loop() {
 
  int LEFT_SENSOR = analogRead(A0);
  int RIGHT_SENSOR = analogRead(A1);
  
if(RIGHT_SENSOR<21 && LEFT_SENSOR<21) //FORWARD
{
            digitalWrite(Motor1, HIGH);
            digitalWrite(Motor2, LOW);
            digitalWrite(Motor3, LOW);
            digitalWrite(Motor4, HIGH);
            analogWrite(PWMmotor1, valuePWM1);
            analogWrite(PWMmotor2, valuePWM1);
}
 
 else if(RIGHT_SENSOR<21 && LEFT_SENSOR>21) //LEFT
 {
            digitalWrite(Motor1, LOW);
            digitalWrite(Motor2, HIGH);
            digitalWrite(Motor3, LOW);
            digitalWrite(Motor4, HIGH);
            analogWrite(PWMmotor1, valuePWM2);
            analogWrite(PWMmotor2, valuePWM2);
}
 
else if(RIGHT_SENSOR>21 && LEFT_SENSOR<21) //RIGHT
 {
              digitalWrite(Motor1, HIGH);
              digitalWrite(Motor2, LOW);
              digitalWrite(Motor3, HIGH);
              digitalWrite(Motor4, LOW);
              analogWrite(PWMmotor1, valuePWM2);
              analogWrite(PWMmotor2, valuePWM2);
}
 
else if(RIGHT_SENSOR>21 && LEFT_SENSOR>21) //STOP
{
              digitalWrite(Motor1, LOW);
              digitalWrite(Motor2, LOW);
              digitalWrite(Motor3, LOW);
              digitalWrite(Motor4, LOW);
 }
}
