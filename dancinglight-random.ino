#define key1 digitalRead(A0)
int ledPin[]={2,3,4,5,6,7};
int(buttonState)=0;
void setup() {
  Serial.begin(9600);
  for(int i=2 ; i<=7;i++){
    pinMode(ledPin[i],OUTPUT);

  }
     pinMode(A0,INPUT);
     randomSeed(analogRead(0));
}

void loop() {
  if(key1 == LOW){
  int randomNum =random(2,8);
   Serial.println(randomNum-1); 
digitalWrite(randomNum,HIGH);
delay(1000);}
for(int i=2;i<=7;i++){
  digitalWrite(i,LOW);
}

}
