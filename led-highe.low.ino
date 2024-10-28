int led =6;

void setup() {

pinMode(led,INPUT);
}

void loop() {
 for(int i=0 ; i<255 ; i=i+5){
  analogWrite(led,i);
  delay(50);
 }
 

  for(int i=255 ; i>=0 ; i=i-5){
 analogWrite(led,i);
   delay(50);
  }

  }
 



