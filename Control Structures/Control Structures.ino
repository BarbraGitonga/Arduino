void setup() {
  // put your setup code here, to run once:
// control structures 
//if statement
Serial.begin(9600);
int z = 20;
int y = 10;
if (z>y&& z>100){
Serial.println("z is great");
}
else if(z>y&& z<100){
Serial.println("z is greater than y ");
}
else{
Serial.println("z is less");
}
}

void loop() {
  // put your main code here, to run repeatedly:

}
