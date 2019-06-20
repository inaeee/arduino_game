#include <Servo.h>

Servo sv1;
Servo sv2;

void setup() {
  // put your setup code here, to run once:
  sv1.attach(13);
  sv2.attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(A0); //A0입력값 x에 저장
  int y=analogRead(A1); //A1입력값 y에 저장

  int angle1=map(y,0,1023,0,120);
  sv1.write(angle1); //서브모터(13번)에 angle1값만큼 출력

  int angle2=map(x,0,1023,0,120);
  sv2.write(angle2); //서브모터(12번)에 angle2값만큼 출력

  delay(15);
}
