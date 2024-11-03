#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  lcd.begin(16,2);
  lcd.clear();
  // put your setup code here, to run once:

}

void loop() {
  lcd.print("Hello world");
  lcd.setCursor(0,1);
  lcd.print("LCD Tutorial");
  // put your main code here, to run repeatedly:

}
