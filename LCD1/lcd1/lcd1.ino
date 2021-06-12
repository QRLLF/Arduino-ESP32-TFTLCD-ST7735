#include "lcd1.h"
void setup() {
  // put your setup code here, to run once:
  LCD_Init();
  LCD_Fill(0,0,LCD_W,LCD_H,WHITE);
}

void loop() {
  // put your main code here, to run repeatedly:
  u8 i=0;
  while(1)
  {
     
  LCD_DrawPoint(10,10,BLACK);  //画点
  LCD_DrawPoint(10,11,BLACK);
  LCD_DrawPoint(11,10,BLACK);
  LCD_DrawPoint(11,11,BLACK);
  LCD_ShowChar(15,15,'1',BLACK,WHITE,16,0);  //显示单个字符  X位置  Y位置  ‘要显示的字符’  字体颜色  背景颜色  字号  显示模式 0不重叠 1重叠
  LCD_ShowString(24,60,"lcd-1",BLACK ,WHITE,16,0); //显示字符串           “要显示的字符串”
  LCD_ShowString(24,80,"-i",BLACK ,WHITE,16,0); //显示字符串               
  LCD_ShowIntNum(72,60,i,3,BLACK,WHITE,16);  //显示整数变量                i=显示整数
  LCD_ShowFloatNum1(60,17,00.00,4,BLACK,WHITE,16); //显示两位小数

  i++;
  
  delay(1000);  
  }

}
