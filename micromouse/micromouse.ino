#include <Joystick.h>


int i1;
int i2;
int i3;
int i4;
int i5;
int i6;

Joystick_ Joystick;

void setup() {
  Serial.begin(9600);
  Joystick.begin(false);
  Joystick.setXAxisRange(-512, 512);
  Joystick.setYAxisRange(-512, 512);
  Joystick.setZAxisRange(-512, 512);
  Joystick.setRxAxisRange(-512, 512);
  Joystick.setRyAxisRange(-512, 512);
  Joystick.setRzAxisRange(-512, 512);

  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);

  i1 = analogRead(A0);
  i2 = analogRead(A9);
  i3 = analogRead(A10);
  i4 = analogRead(A2);
  i5 = analogRead(A3);
  i6 = analogRead(A1);
}

void loop() {
  int s1 = analogRead(A0)-i1;
  int s2 = analogRead(A9)-i2;
  int s3 = analogRead(A10)-i3;
  int s4 = analogRead(A2)-i4;
  int s5 = analogRead(A3)-i5;
  int s6 = analogRead(A1)-i6;

  int cm1 = s1-s2;
  int dm1 = s1+s2;
  int cm2 = s3-s4;
  int dm2 = s3+s4;
  int cm3 = s5-s6;
  int dm3 = s5+s6;

  int y = cm1+cm2+cm3;
  int z = dm1-dm3;
  int x = dm2-dm1/2-dm3/2;
  int ry = dm1+dm2+dm3;
  int rx = cm1/2-cm2+cm3/2;
  int rz = cm1-cm3;

  Joystick.setButton(0, !digitalRead(0));
  Joystick.setButton(1, !digitalRead(1));
  Joystick.setButton(2, !digitalRead(2));
  Joystick.setButton(3, !digitalRead(3));
  Joystick.setButton(4, !digitalRead(4));
  Joystick.setButton(5, !digitalRead(5));
  Joystick.setButton(6, !digitalRead(6));
  Joystick.setButton(7, !digitalRead(7));
  Joystick.setButton(8, !digitalRead(8));
  
  Joystick.setYAxis(y);
  Joystick.setZAxis(z);
  Joystick.setXAxis(x);
  Joystick.setRyAxis(-ry);
  Joystick.setRxAxis(-rx);
  Joystick.setRzAxis(rz);
  
  Joystick.sendState();
}
