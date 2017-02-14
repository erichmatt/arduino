#include <Servo.h>
Servo servo1; Servo servo2; 


void setup() {

  pinMode(1,OUTPUT);
  servo1.attach(12); //analog pin 0
  //servo1.setMaximumPulse(2000);
  //servo1.setMinimumPulse(700);

  servo2.attach(13); //analog pin 1
  Serial.begin(9600);
  Serial.println("Ready");

}

void loop() {
  int pos1 = 0;
  int pos2 = 0;
  for (float x = 0; x <1800; x++){
    servo1.write(x/10);
    servo2.write(x/10);
    delay(4);
  }
 }

void forward() { 
  servo1.write(0);
  servo2.write(180);
}

void reverse(){
  servo1.write(180);
  servo2.write(0);
}

void wait() {
  servo1.write(99);
  servo2.write(99);
}

void left() {
  servo1.write(99);
  servo2.write(180);
}

void right() {
  servo1.write(0);
  servo2.write(99);
}

