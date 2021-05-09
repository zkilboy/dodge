#include <LiquidCrystal.h>
#include <LCDKeypad.h>

#define MINVAL 1
#define MAXVAL 1000

LCDKeypad lcd;

byte c_up[8] = {
  B00100,
  B01110,
  B10101,
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
};

byte c_down[8] = {
  B00100,
  B00100,
  B00100,
  B00100,
  B00100,
  B10101,
  B01110,
  B00100,
};

byte c_select[8] = {
  B00000,
  B01110,
  B11111,
  B11111,
  B11111,
  B11111,
  B01110,
  B00000,
};

void setup()
{
  int i,k;

  lcd.createChar(1,c_select);
  lcd.createChar(2,c_up);
  lcd.createChar(3,c_down);
  lcd.begin(16, 2);
  
  lcd.clear();
  lcd.print("****************");
  lcd.setCursor(0,1);
  lcd.print("****************");
  delay(3000);
  lcd.clear();
  delay(1000);
  lcd.print("<3<3<3| Health");
  lcd.setCursor(0,1);
  lcd.print("000000| Score");
  delay(3000);
  lcd.clear();
  delay(1000);
  lcd.print("YOU:   U |<^>v");
  lcd.setCursor(0,1);
  lcd.print("DODGE: * | <-");
  delay(3000);
  
  
  

}

void loop()
{
  int scoreMain = 0;
  int healthMain = 6;
  int buttonPressed;
  int player [2] = {0, 0};


}
int drawScreen(int score, int health){
  char topLine;
  char bottomLine;

  char topBlock;
  char charScore = score;
  
  switch(health){
    case 6:
      topBlock = "<3<3<3 |";
      break;
    case 5:
      topBlock = "<3<3<  |";
      break;
    case 4:
      topBlock = "<3<3   |";
      break;
    case 3:
      topBlock = "<3<    |";
      break;
    case 2:
      topBlock = "<3     |";
      break;
    case 1:
      topBlock = "<      |";
      break;
    case 0:
      topBlock = "       |********";
      break;
  }
  return 0;
}
void waitButton()
{
  int buttonPressed; 
  waitReleaseButton;
  lcd.blink();
  while((buttonPressed=lcd.button())==KEYPAD_NONE)
  {
  }
  delay(50);  
  lcd.noBlink();
  return buttonPressed;
}

void waitReleaseButton()
{
  delay(50);
  while(lcd.button()!=KEYPAD_NONE)
  {
  }
  delay(50);
}
