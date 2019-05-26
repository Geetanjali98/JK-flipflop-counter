#include"Arduino.h"
#include"JKlogic.h"
int  A,B,C,D,E,F;
void setup()
{
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  A=0;
  B=0;
  C=0;
  
  for (int i=1;i<=8;i++)
  {
  D=JKlogic(A,!A);
  E=JKlogic(B,!B);
  F=JKlogic(C,!C);
  Serial.println(D);
  digitalWrite(6,D);
  digitalWrite(7,E);
  digitalWrite(8,F);
  delay(1000);
  
  if(i%4==0)
  A=!A;
  
  if(i%2==0)
  B=!B;
  
  C=!C;
}
}

