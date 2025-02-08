#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  //lcd.cursor();
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  //lcd.leftToRight();
  lcd.setCursor(0, 0);
  lcd.print("Olisitko kanssan");
  lcd.setCursor(0, 1);
  lcd.print("i siili? ");
  delay(5000);
  lcd.clear();
  delay(1000);
  image01();
  delay(200);
  image02();
  delay(200);
  image03();
  delay(200);
  image04();
  delay(200);
  image05();
  delay(200);
  image06();
  delay(200);
  image07();
  delay(200);
  image08();
  delay(200);
  image09();
  delay(200);
  image10();
  delay(200);
  image11();
  delay(200);
  image12();
  delay(200);
  image13();
  delay(200);
  image14();
  delay(200);
  image15();
  delay(200);
  image16();
  delay(200);
  image17();
  delay(200);
  image18();
  delay(200);
  image19();
  delay(200);
  image20();
  delay(200);
  image21();
  delay(200);
  image22();
  delay(200);
  image23();
  delay(200);
  image24();
  delay(200);
  image25();
  delay(200);
  image26();
  delay(200);
  image27();
  delay(200);
  image28();
  delay(10000);
  lcd.clear();
  delay(1000);
}  
void image01() 
{
	lcd.clear();

	byte image31[8] = {B00000, B00000, B00000, B01001, B00111, B01111, B11111, B00010};
	byte image32[8] = {B00000, B00000, B00000, B01010, B11100, B11110, B11100, B00100};


	lcd.createChar(0, image31);
	lcd.createChar(1, image32);


	lcd.setCursor(14, 1);
	lcd.write(byte(0));
	lcd.setCursor(15, 1);
	lcd.write(byte(1));

}

void image02() 
{
	lcd.clear();

	byte image31[8] = {B00000, B00000, B00000, B10010, B01111, B11111, B11111, B00100};
	byte image32[8] = {B00000, B00000, B00000, B10100, B11000, B11100, B11001, B01000};
	byte image30[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00001, B00000};


	lcd.createChar(0, image31);
	lcd.createChar(1, image32);
	lcd.createChar(2, image30);


	lcd.setCursor(14, 1);
	lcd.write(byte(0));
	lcd.setCursor(15, 1);
	lcd.write(byte(1));
	lcd.setCursor(13, 1);
	lcd.write(byte(2));

}

void image03() 
{
	lcd.clear();

	byte image31[8] = {B00000, B00000, B00000, B00101, B11111, B11111, B11111, B01000};
	byte image32[8] = {B00000, B00000, B00000, B01000, B10000, B11010, B10001, B10000};
	byte image30[8] = {B00000, B00000, B00000, B00001, B00000, B00001, B00011, B00000};


	lcd.createChar(0, image31);
	lcd.createChar(1, image32);
	lcd.createChar(2, image30);


	lcd.setCursor(14, 1);
	lcd.write(byte(0));
	lcd.setCursor(15, 1);
	lcd.write(byte(1));
	lcd.setCursor(13, 1);
	lcd.write(byte(2));

}

void image04() 
{
  lcd.clear();

  byte image31[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
  byte image32[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00001, B00100};
  byte image30[8] = {B00000, B00000, B00000, B00010, B00001, B00011, B00111, B00000};


  lcd.createChar(0, image31);
  lcd.createChar(1, image32);
  lcd.createChar(2, image30);


  lcd.setCursor(14, 1);
  lcd.write(byte(0));
  lcd.setCursor(15, 1);
  lcd.write(byte(1));
  lcd.setCursor(13, 1);
  lcd.write(byte(2));

}

void image05() 
{
	lcd.clear();

	byte image31[8] = {B00000, B00000, B00000, B10101, B11110, B11111, B11110, B00010};
	byte image32[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B01000, B00000};
	byte image30[8] = {B00000, B00000, B00000, B00100, B00011, B00111, B01111, B00001};


	lcd.createChar(0, image31);
	lcd.createChar(1, image32);
	lcd.createChar(2, image30);


	lcd.setCursor(14, 1);
	lcd.write(byte(0));
	lcd.setCursor(15, 1);
	lcd.write(byte(1));
	lcd.setCursor(13, 1);
	lcd.write(byte(2));

}

void image06() 
{
	lcd.clear();

	byte image31[8] = {B00000, B00000, B00000, B10100, B11000, B11100, B11000, B01001};
	byte image30[8] = {B00000, B00000, B00000, B10010, B01111, B11111, B11111, B00100};
	byte image29[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00001, B00000};
	byte image32[8] = {B00000, B00000, B00000, B00000, B00000, B10000, B00000, B00000};


	lcd.createChar(0, image31);
	lcd.createChar(1, image30);
	lcd.createChar(2, image29);
	lcd.createChar(3, image32);


	lcd.setCursor(14, 1);
	lcd.write(byte(0));
	lcd.setCursor(13, 1);
	lcd.write(byte(1));
	lcd.setCursor(12, 1);
	lcd.write(byte(2));
	lcd.setCursor(15, 1);
	lcd.write(byte(3));

}

void image07() 
{
	lcd.clear();

	byte image31[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00010, B00001};
	byte image30[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image29[8] = {B00000, B00000, B00000, B00010, B00001, B00011, B00111, B00000};


	lcd.createChar(0, image31);
	lcd.createChar(1, image30);
	lcd.createChar(2, image29);


	lcd.setCursor(14, 1);
	lcd.write(byte(0));
	lcd.setCursor(13, 1);
	lcd.write(byte(1));
	lcd.setCursor(12, 1);
	lcd.write(byte(2));

}

void image08() 
{
	lcd.clear();

	byte image31[8] = {B00000, B00000, B00000, B00000, B00000, B10000, B00000, B00000};
	byte image30[8] = {B00000, B00000, B00000, B01010, B11100, B11110, B11100, B00101};
	byte image29[8] = {B00000, B00000, B00000, B01001, B00111, B01111, B11111, B00010};


	lcd.createChar(0, image31);
	lcd.createChar(1, image30);
	lcd.createChar(2, image29);


	lcd.setCursor(14, 1);
	lcd.write(byte(0));
	lcd.setCursor(13, 1);
	lcd.write(byte(1));
	lcd.setCursor(12, 1);
	lcd.write(byte(2));

}

void image09() 
{
	lcd.clear();

	byte image30[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00101, B00000};
	byte image29[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image28[8] = {B00000, B00000, B00000, B00010, B00001, B00011, B00111, B00000};


	lcd.createChar(0, image30);
	lcd.createChar(1, image29);
	lcd.createChar(2, image28);


	lcd.setCursor(13, 1);
	lcd.write(byte(0));
	lcd.setCursor(12, 1);
	lcd.write(byte(1));
	lcd.setCursor(11, 1);
	lcd.write(byte(2));

}

void image10() 
{
	lcd.clear();

	byte image29[8] = {B00000, B00000, B00000, B10100, B11001, B11100, B11000, B01000};
	byte image28[8] = {B00000, B00000, B00000, B10010, B01111, B11111, B11111, B00100};
	byte image27[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00001, B00000};


	lcd.createChar(0, image29);
	lcd.createChar(1, image28);
	lcd.createChar(2, image27);


	lcd.setCursor(12, 1);
	lcd.write(byte(0));
	lcd.setCursor(11, 1);
	lcd.write(byte(1));
	lcd.setCursor(10, 1);
	lcd.write(byte(2));

}

void image11() 
{
	lcd.clear();

	byte image29[8] = {B00000, B00000, B00000, B00000, B00000, B00100, B10000, B00000};
	byte image28[8] = {B00000, B00000, B00000, B10101, B11110, B11111, B11110, B00010};
	byte image27[8] = {B00000, B00000, B00000, B00100, B00011, B00111, B01111, B00001};


	lcd.createChar(0, image29);
	lcd.createChar(1, image28);
	lcd.createChar(2, image27);


	lcd.setCursor(12, 1);
	lcd.write(byte(0));
	lcd.setCursor(11, 1);
	lcd.write(byte(1));
	lcd.setCursor(10, 1);
	lcd.write(byte(2));

}

void image12() 
{
	lcd.clear();

	byte image28[8] = {B00000, B00000, B00000, B10000, B00100, B10000, B00000, B00010};
	byte image27[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image26[8] = {B00000, B00000, B00000, B00010, B00001, B00011, B00111, B00000};


	lcd.createChar(0, image28);
	lcd.createChar(1, image27);
	lcd.createChar(2, image26);


	lcd.setCursor(11, 1);
	lcd.write(byte(0));
	lcd.setCursor(10, 1);
	lcd.write(byte(1));
	lcd.setCursor(9, 1);
	lcd.write(byte(2));

}

void image13() 
{
	lcd.clear();

	byte image27[8] = {B00000, B00000, B00000, B01000, B10000, B11000, B10001, B10000};
	byte image26[8] = {B00000, B00000, B00000, B00101, B11111, B11111, B11111, B01000};
	byte image17[8] = {B00000, B00000, B00000, B00000, B00000, B10000, B11000, B00000};
	byte image25[8] = {B00000, B00000, B00000, B00001, B00000, B00001, B00011, B00000};


	lcd.createChar(0, image27);
	lcd.createChar(1, image26);
	lcd.createChar(2, image17);
	lcd.createChar(3, image25);


	lcd.setCursor(10, 1);
	lcd.write(byte(0));
	lcd.setCursor(9, 1);
	lcd.write(byte(1));
	lcd.setCursor(0, 1);
	lcd.write(byte(2));
	lcd.setCursor(8, 1);
	lcd.write(byte(3));

}

void image14() 
{
	lcd.clear();

	byte image26[8] = {B00000, B00000, B00000, B10100, B11001, B11100, B11000, B01001};
	byte image17[8] = {B00000, B00000, B00000, B01000, B10000, B11100, B11110, B10000};
	byte image25[8] = {B00000, B00000, B00000, B10010, B01111, B11111, B11111, B00100};
	byte image24[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00001, B00000};
	byte image27[8] = {B00000, B00000, B00000, B00000, B00000, B10000, B00000, B00000};


	lcd.createChar(0, image26);
	lcd.createChar(1, image17);
	lcd.createChar(2, image25);
	lcd.createChar(3, image24);
	lcd.createChar(4, image27);


	lcd.setCursor(9, 1);
	lcd.write(byte(0));
	lcd.setCursor(0, 1);
	lcd.write(byte(1));
	lcd.setCursor(8, 1);
	lcd.write(byte(2));
	lcd.setCursor(7, 1);
	lcd.write(byte(3));
	lcd.setCursor(10, 1);
	lcd.write(byte(4));

}

void image15() 
{
	lcd.clear();

	byte image26[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B10000, B00000};
	byte image17[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image25[8] = {B00000, B00000, B00000, B01010, B11100, B11110, B11100, B00100};
	byte image24[8] = {B00000, B00000, B00000, B01001, B00111, B01111, B11111, B00010};
	byte image18[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B10000, B00000};


	lcd.createChar(0, image26);
	lcd.createChar(1, image17);
	lcd.createChar(2, image25);
	lcd.createChar(3, image24);
	lcd.createChar(4, image18);


	lcd.setCursor(9, 1);
	lcd.write(byte(0));
	lcd.setCursor(0, 1);
	lcd.write(byte(1));
	lcd.setCursor(8, 1);
	lcd.write(byte(2));
	lcd.setCursor(7, 1);
	lcd.write(byte(3));
	lcd.setCursor(1, 1);
	lcd.write(byte(4));

}

void image16() 
{
	lcd.clear();

	byte image17[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image24[8] = {B00000, B00000, B00000, B10101, B11110, B11111, B11110, B00010};
	byte image18[8] = {B00000, B00000, B00000, B01000, B10000, B11000, B11100, B00000};
	byte image23[8] = {B00000, B00000, B00000, B00100, B00011, B00111, B01111, B00001};
	byte image25[8] = {B00000, B00000, B00000, B00000, B01000, B00000, B01000, B00000};


	lcd.createChar(0, image17);
	lcd.createChar(1, image24);
	lcd.createChar(2, image18);
	lcd.createChar(3, image23);
	lcd.createChar(4, image25);


	lcd.setCursor(0, 1);
	lcd.write(byte(0));
	lcd.setCursor(7, 1);
	lcd.write(byte(1));
	lcd.setCursor(1, 1);
	lcd.write(byte(2));
	lcd.setCursor(6, 1);
	lcd.write(byte(3));
	lcd.setCursor(8, 1);
	lcd.write(byte(4));

}

void image17() 
{
	lcd.clear();

	byte image17[8] = {B00000, B00000, B00000, B01010, B00111, B01111, B00111, B00100};
	byte image24[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00001, B00000};
	byte image18[8] = {B00000, B00000, B00000, B10010, B11100, B11110, B11111, B01000};
	byte image23[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image22[8] = {B00000, B00000, B00000, B00010, B00001, B00011, B00111, B00000};


	lcd.createChar(0, image17);
	lcd.createChar(1, image24);
	lcd.createChar(2, image18);
	lcd.createChar(3, image23);
	lcd.createChar(4, image22);


	lcd.setCursor(0, 1);
	lcd.write(byte(0));
	lcd.setCursor(7, 1);
	lcd.write(byte(1));
	lcd.setCursor(1, 1);
	lcd.write(byte(2));
	lcd.setCursor(6, 1);
	lcd.write(byte(3));
	lcd.setCursor(5, 1);
	lcd.write(byte(4));

}

void image18() 
{
	lcd.clear();

	byte image17[8] = {B00000, B00000, B00000, B00010, B00001, B00011, B00001, B00001};
	byte image18[8] = {B00000, B00000, B00000, B10100, B11111, B11111, B11111, B00010};
	byte image23[8] = {B00000, B00000, B00000, B01000, B10000, B11001, B10010, B10000};
	byte image22[8] = {B00000, B00000, B00000, B00101, B11111, B11111, B11111, B01000};
	byte image21[8] = {B00000, B00000, B00000, B00001, B00000, B00001, B00011, B00000};
	byte image19[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B11000, B00000};


	lcd.createChar(0, image17);
	lcd.createChar(1, image18);
	lcd.createChar(2, image23);
	lcd.createChar(3, image22);
	lcd.createChar(4, image21);
	lcd.createChar(5, image19);


	lcd.setCursor(0, 1);
	lcd.write(byte(0));
	lcd.setCursor(1, 1);
	lcd.write(byte(1));
	lcd.setCursor(6, 1);
	lcd.write(byte(2));
	lcd.setCursor(5, 1);
	lcd.write(byte(3));
	lcd.setCursor(4, 1);
	lcd.write(byte(4));
	lcd.setCursor(2, 1);
	lcd.write(byte(5));

}

void image19() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B10101, B01111, B11111, B01111, B01000};
	byte image22[8] = {B00000, B00000, B00000, B10100, B11000, B11100, B11000, B01000};
	byte image21[8] = {B00000, B00000, B00000, B10010, B01111, B11111, B11111, B00100};
	byte image19[8] = {B00000, B00000, B00000, B00100, B11000, B11100, B11110, B10000};
	byte image20[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B00001, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));

}

void image20() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B01010, B00111, B01111, B00111, B00100};
	byte image22[8] = {B00000, B00000, B00000, B01000, B10000, B11000, B10000, B10000};
	byte image21[8] = {B00000, B00000, B00000, B00101, B11111, B11111, B11111, B01000};
	byte image19[8] = {B00000, B00000, B00000, B10010, B11100, B11110, B11111, B01000};
	byte image20[8] = {B00000, B00000, B00000, B00001, B00000, B00001, B00011, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));

}

void image21() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B00101, B00011, B00111, B00011, B00010};
	byte image22[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00000, B00000};
	byte image21[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image19[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image20[8] = {B00000, B00000, B00000, B00010, B00001, B00011, B10111, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));

}

void image22() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B00101, B00011, B00111, B00011, B00010};
	byte image22[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00000, B00000};
	byte image21[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image19[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image20[8] = {B00000, B01000, B00000, B00010, B00001, B00011, B10111, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));

}

void image23() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B00101, B00011, B00111, B00011, B00010};
	byte image22[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00000, B00000};
	byte image21[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image19[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image20[8] = {B10100, B01000, B00000, B00010, B00001, B00011, B10111, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));

}

void image24() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B00101, B00011, B00111, B00011, B00010};
	byte image22[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00000, B00000};
	byte image21[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image19[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image20[8] = {B10100, B01000, B00000, B00010, B00001, B00011, B10111, B00000};
	byte image04[8] = {B00000, B00000, B00000, B00000, B00000, B00000, B01000, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);
	lcd.createChar(5, image04);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));
	lcd.setCursor(3, 0);
	lcd.write(byte(5));

}

void image25() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B00101, B00011, B00111, B00011, B00010};
	byte image22[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00000, B00000};
	byte image21[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image19[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image20[8] = {B10100, B01000, B00000, B00010, B00001, B00011, B10111, B00000};
	byte image04[8] = {B00000, B00000, B00000, B00000, B00000, B10100, B01000, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);
	lcd.createChar(5, image04);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));
	lcd.setCursor(3, 0);
	lcd.write(byte(5));

}

void image26() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B00101, B00011, B00111, B00011, B00010};
	byte image22[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00000, B00000};
	byte image21[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image19[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image20[8] = {B10100, B01000, B00000, B00010, B00001, B00011, B10111, B00000};
	byte image04[8] = {B00000, B00000, B00000, B01000, B00000, B10100, B01000, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);
	lcd.createChar(5, image04);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));
	lcd.setCursor(3, 0);
	lcd.write(byte(5));

}

void image27() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B00101, B00011, B00111, B00011, B00010};
	byte image22[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00000, B00000};
	byte image21[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image19[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image20[8] = {B10100, B01000, B00000, B00010, B00001, B00011, B10111, B00000};
	byte image04[8] = {B00000, B00000, B10100, B01000, B00000, B10100, B01000, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);
	lcd.createChar(5, image04);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));
	lcd.setCursor(3, 0);
	lcd.write(byte(5));

}

void image28() 
{
	lcd.clear();

	byte image18[8] = {B00000, B00000, B00000, B00101, B00011, B00111, B00011, B00010};
	byte image22[8] = {B00000, B00000, B00000, B10000, B00000, B10000, B00000, B00000};
	byte image21[8] = {B00000, B00000, B00000, B01010, B11111, B11111, B11111, B10001};
	byte image19[8] = {B00000, B00000, B00000, B01001, B11110, B11111, B11111, B00100};
	byte image20[8] = {B10100, B01000, B00000, B00010, B00001, B00011, B10111, B00000};
	byte image04[8] = {B00000, B00000, B10100, B01000, B00000, B10100, B01000, B00000};
	byte image07[8] = {B00000, B00100, B00100, B00100, B00100, B00000, B01010, B00100};
	byte image23[8] = {B00000, B01010, B01010, B01010, B00100, B00000, B00000, B00000};


	lcd.createChar(0, image18);
	lcd.createChar(1, image22);
	lcd.createChar(2, image21);
	lcd.createChar(3, image19);
	lcd.createChar(4, image20);
	lcd.createChar(5, image04);
	lcd.createChar(6, image07);
	lcd.createChar(7, image23);


	lcd.setCursor(1, 1);
	lcd.write(byte(0));
	lcd.setCursor(5, 1);
	lcd.write(byte(1));
	lcd.setCursor(4, 1);
	lcd.write(byte(2));
	lcd.setCursor(2, 1);
	lcd.write(byte(3));
	lcd.setCursor(3, 1);
	lcd.write(byte(4));
	lcd.setCursor(3, 0);
	lcd.write(byte(5));
	lcd.setCursor(6, 0);
	lcd.write(byte(6));
	lcd.setCursor(6, 1);
	lcd.write(byte(7));

}