int button = 7;
int spot = 2;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(spot, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int x=(digitalRead(button));
if (x==HIGH){
digitalWrite(spot, HIGH);
}
else{
  digitalWrite(spot,LOW);
}
}
