#include <8052.h>


typedef unsigned int u16;
typedef unsigned char u8;

#define LED_PORT P2


void delay_10us(u16 ten_us)
{
	while(ten_us--);	
}

void main()
{
	u8 i = 0;	
	while(1)
	{
		for(i = 0; i < 8; i++)
		{
			delay_10us(5000);
			//LED_PORT = ~(0xfe << i) ^ 0xff;
			LED_PORT = ~(0x01 << i);
			delay_10us(5000);
		}
		LED_PORT = 0xff;
		delay_10us(5000);
	}
}

