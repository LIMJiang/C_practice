#include<stdio.h>

//指向函数数组的指针
//回调函数
void menu()
{
	printf("————————————————————");
	printf("——  1. add                         2. sub        —— ");
	printf("——  3. mul                         4.div          —— ");
	printf("————————————————————");
}






int Add(int x,int y)	
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x*y;
}

int Div(int x, int y)
{
	return x / y;
}

void Calc(int(*pf)(int, int))
{

	int x = 0;
	int y = 0;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}




int main()
{
	
	int input = 0;

	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };//函数指针数组

	do
	{
		
		menu();
		printf("请选择:>");
		scanf("%d,&input");

		switch (input)
		{
		case 1:
				Calc(Add);
				break;
			case 2:
				Calc(Sub);
				break;
			case 3:
				Calc(Mul);
				break;
			case 4:
				Calc(Div);
				break;
			default:
				break;


		}
	




	} while (input);


}
