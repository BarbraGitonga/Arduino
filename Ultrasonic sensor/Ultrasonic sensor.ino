#include<NewPing.h>
NewPing sonar(10,11,50); //trigger pin, eccho pin, distance in cm
#define LED 9
#define LED2 4
int bright = 5;
int fade1 = 2;
int fade2 = 1;
int dull;
int dullest;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(50);
pinMode(LED, OUTPUT);
pinMode(LED2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int z =sonar.ping_cm();
Serial.print("distance is:");
Serial.println(z);
delay(1000);
if(z<=10){ 
  analogWrite(LED, bright);
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED2, LOW);
  delay(100);
  }
 else if(z>=11 && z<=40){ 
dull = bright - fade1;
analogWrite(LED, dull);
}
 else if(z<=50 && z>40){ 
dullest = dull-fade2;
analogWrite(LED, dullest);
}
}
