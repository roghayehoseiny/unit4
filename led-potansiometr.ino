int led=5;
int val;
void setup() {
  pinMode(led,OUTPUT);
  
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
 val= analogRead(A0);
      analogWrite(led,val/4);
  // put your main code here, to run repeatedly:

}
