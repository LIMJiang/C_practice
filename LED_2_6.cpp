#include<megal6.h>
#include <delay.h>
void main(void)
{
char position = 0 // position 为控制位的位置
PORTA=OxFF; // PA 口输出全 1，LED 全灭
DDRA=OxFF; // PA 口工作为输出方式
while(1)
{
	//Please write your appliacation
PORTA =~(1<<position);
	if (++position>= 8)
	position = 0;
delay_ms(1000);
};
}