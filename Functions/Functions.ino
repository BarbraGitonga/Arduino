int LED4 = 4;
int LED2 = 2;
int LED3 = 3;
void setup(){
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED4, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Blink(LED4);
Blink(LED2);
Blink(LED3);
}
void Blink(int pin){
digitalWrite(pin, HIGH);
delay(6000);
digitalWrite(pin, LOW);
delay(100);

}