#include<Servo.h>

// for calling 5 servo motors
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

// pins for connecting Flex sensors
int a = A4;
int b = A3;
int c = A2;
int d = A1;
int e = A0;


// values for servo motor initial angle
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;



void setup() {
  // put your setup code here, to run once:

  // servo connections on arduino pin
  servo1.attach(12);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  servo5.attach(8);

  // Setting all servos to 0 angle.
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Reading the values from flex sensor and converting them to analog values
  val1 = analogRead(a);
  val2 = analogRead(b);
  val3 = analogRead(c);
  val4 = analogRead(d);
  val5 = analogRead(e);
  
  Serial.print("val1 = ");
  Serial.println(val1);

  Serial.print("val2 = ");
  Serial.println(val2);

  Serial.print("val3 = ");
  Serial.println(val3);

  Serial.print("val4 = ");
  Serial.println(val4);

  Serial.print("val5 = ");
  Serial.println(val5);

  // servo4.write(180);
  // delay(500);
  // servo4.write(0);
  // delay(500);

  
  // when my hand bends, flex sensor gives value less than 40. so 180 degrees makes animatronic hand close.
  if (val1 < 850)
  {
    servo1.write(180);
    delay(30);

  }

  // when my hand is striaght , flex sensor gives value greater than 200. So, 90 degrees makes animatronic hand open.
  // if (val1 > 850)
  else
  {
    servo1.write(0);
    delay(30);

  }

  // similarily for 2nd finger
  if (val2 < 850)
  {
    
    servo2.write(180);
    delay(3);

  }
  // if (val2 > 800)
  else
  {
    servo2.write(0);
    delay(3);

  }


  // similarily for 3rd finger
  if (val3 < 850)
  {
    servo3.write(180);
    delay(3);

  }
  // if (val3 > 800)
  else
  {
    servo3.write(0);
    delay(3);

  }


  // similarily for 4th finger
  if (val4 < 850)
  {
    servo4.write(180);
    delay(3);

  }
  // if (val4 > 800)
  else
  {
    servo4.write(0);
    delay(3);

  }



  // similarily for 5th finger
  if (val5 < 850)
  {
    servo5.write(180);
    delay(3);

  }
  // if (val5 > 800)
  else
  {
    servo5.write(0);
    delay(3);

  }

}
