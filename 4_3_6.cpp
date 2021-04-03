#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
int y,x;
for (x = 1; x < 17; x++)
{
for (y = 1; y < 25; y++)
{
if ((N-x-y)+3*x+2*y==50)
{
printf ("%d %d %d\n",x,y,N-x-y);
}
}
}
return 0;
}
