void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
int mine[5] = {1, 2, 3, 4, 5,};
Serial.println(mine[2]);
mine[3]=9;//replaces value at address 3
Serial.println(mine[3]);
int added = mine[2]+ mine[3]+mine[0];//3+9+1
Serial.println(added);
for(int i=0; i<5; i++){// the initial is numbered in index
  Serial.println(mine[i]);
}
for(int j=0; j<5; j++){
   Serial.println(mine[j]+5);
}
int sum = 0;
for(int k=0; k<5; k++){
  sum = sum + mine[k];  
  Serial.println(sum);
}
char Str1[7]={'b', 'a', 'r', 'b', 'r', 'a'};//record a number extra when declaring a string as it counts a null character.
Serial.println(Str1);
char Str2[] = "barbra";// leaving the box blank will asign the automatic string number
Serial.println(Str2);
char Str3[7] = {'b', 'a', 'r', 'b', 'r', 'a', '\0'};
Serial.println(Str3);

}

void loop() {
  // put your main code here, to run repeatedly:

}
