#include<LiquidCrystal.h>
#include<NewPing.h>
const int rs =7, en = 6, d4=5, d5=4, d6=3, d7=2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
NewPing sonar(10, 9, 100);
void setup(){
Serial.begin(9600);
lcd.begin(16,2);
//lcd.autoscroll();
}
void loop(){
  int x = sonar.ping_cm();
  Serial.println(x);
  lcd.setCursor(0,0);
  lcd.print("distance in cm:");
  lcd.setCursor(0,1);
  lcd.print(x);
  delay(500);
  lcd.clear();
  //lcd.setCursor(0,1);
}
