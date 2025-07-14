#include<lpc21XX.h>           
#include"Lcd_4bit.h"

void Delay(unsigned int time);


void main (void)
{ 
	PINSEL0=0x00000000;
	PINSEL1=0x00000000;
	PINSEL2=0x00000000;
		LCD_Init();
	
    while(1)                
    {
				LCD_Command(0x80);
			  LCD_Char('A');
				LCD_Command(0xC0);
			  LCD_string("Sanket Mali");
			
		}
}

void Delay(unsigned int time)
{
    int j;
    int i;
    for(i=0;i<time;i++)
    {
        for(j=0;j<60000;j++)
        {
        }
    }
}

