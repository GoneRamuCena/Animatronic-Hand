#include<Servo.h>

int pos = 0;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;


void setup()
{
  // put your setup code here, to run once:
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  servo5.attach(12);

  pinMode(LED_BUILTIN,OUTPUT);

  Serial.begin(9600);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);

  digitalWrite(LED_BUILTIN,HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN,LOW);



  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);

  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);


  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  servo5.write(180);

  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN,LOW);

}
