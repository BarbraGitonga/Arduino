void setup() {
  // put your setup code here, to run once:
//loop structures
Serial.begin(9600);
for(int i=0; i<=5; i++){
  for(int j=0; j<=i; j++){
    Serial.print("*");// prints lines in lines
  }
Serial.println();
}
int multiple = 1;
while(multiple<=10){
Serial.println(multiple*2);
multiple++;
}
static int y = 0;
while(y<=5){
Serial.println(y);
y++;
delay(1000);
Serial.println("we are in a while loop");  //will keep going unless you put a break line.
}
int x = 4;
do{
  Serial.println("hope is still alive");
  delay(500);
}while(x>5);
int z = 3;
switch(z){
  case 1 ... 10: //dots provide range for values, also have to be spaced.
    Serial.println("choice 1");
  case 11 ... 20 :
    Serial.println("choice 2");
  default:
    Serial.println("choice 3");
}
}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.println("i delight myself in you");
///Serial.println("in the glory of your presence");
//return;// prevents the next lines from being printed. terminates the funtion
//Serial.println("Im overwhelmed");
//Serial.println("Im overwhelmed by you");
}
