int red = 5;
int orange= 6;
int green = 7;
 
void setup() {
  // put orangeour setup code here, to run once:
Serial.begin(9600);
pinMode(red, OUTPUT);
pinMode(orange, OUTPUT);
pinMode(green, OUTPUT);
}

void loop() {
  // put orangeour main code here, to run repeatedlorange:
digitalWrite(red, HIGH);
delay(1000l);
digitalWrite(red, LOW);
delay(1000);
digitalWrite(orange,HIGH);
delay(1000);
digitalWrite(orange,LOW);
delay(1000);
digitalWrite(green, HIGH);
delay(1000);
digitalWrite(green, LOW);
delay(1000);
}
