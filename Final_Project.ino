#include <Servo.h>

Servo rightFoot;
Servo leftFoot;
Servo rightHip;
Servo leftHip;

void setup() {


delay(5000);
  
  rightFoot.attach(4);
  rightFoot.write(40);
  leftFoot.attach(3);
  leftFoot.write(40);
  rightHip.attach(9);
  leftHip.attach(10);
  leftHip.write(60);


  leftHip.write(0);
  rightHip.write(0);

  delay(1000);
  //lefthip normal
  leftHip.write(70);
  delay(1000);
  //rightHip normal
  rightHip.write(40);
  delay(1000);

}

void turnLeft() {
for(int i = 0; i < 5; i++) {
  rightFoot.write(40);
  delay(1000);
  rightHip.write(0);
  delay(1000);
  rightFoot.write(60);
  delay(1000);
  rightHip.write(20);
  delay(1000);
}
}

void turnRight() {

  for(int i = 0; i < 5; i++) {
  //lefthip normal
  leftHip.write(70);
  delay(1000);
  //leftfoot up
  leftFoot.write(17);
  delay(1000);
  //lefthip in
  leftHip.write(40);
  delay(1000);
  //leftFoot down
  leftFoot.write(30);
  delay(1000);
  }
}

void walk(){
    //leftfoot up
  leftFoot.write(10);
  delay(1000);
  
  //rightHip normal
  rightHip.write(40);
  //lefthip in
  leftHip.write(90);
  delay(1000);

  
  //leftFoot down
  leftFoot.write(30);
  delay(1000);
  //rightfoot up
  rightFoot.write(50);
  delay(1000);


  //righthip in
  rightHip.write(20);
  //lefthip normal
  leftHip.write(70);
  
  delay(1000);
  
  //rightfoot down
  rightFoot.write(35);
  delay(1000);
}

bool obstacle() {

  //I haven't used the unltrasonic sensor
  return false;
}
  


void loop() {

  if(!obstacle()) {
    walk();
  }
  else {
    turnRight();
  }

  
  
  

}
