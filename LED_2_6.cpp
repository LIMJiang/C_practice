#include<megal6.h>
#include <delay.h>
void main(void)
{
char position = 0 // position Ϊ����λ��λ��
PORTA=OxFF; // PA �����ȫ 1��LED ȫ��
DDRA=OxFF; // PA �ڹ���Ϊ�����ʽ
while(1)
{
	//Please write your appliacation
PORTA =~(1<<position);
	if (++position>= 8)
	position = 0;
delay_ms(1000);
};
}