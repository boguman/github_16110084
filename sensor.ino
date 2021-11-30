#include <afstandssensor.h>

int trig = 11;
int echo = 12;


void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(echo, LOW);
  long duration = pulseIn(echo, HIGH);
  int distance = duration / 29 / 2;
 
  if (distance < 30)
  {
    Serial.println(1);
    delay(1000);
  }
  else
  {
    Serial.println(0);
    delay(1000);
  }
  delay(100);

}
