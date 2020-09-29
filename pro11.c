#include<stdio.h>

int main()
{
	int y=10;
	if(y++>9 && y++!=10 && y++>11)//10>9 && 11!=10 && 12>11
	{
		printf("%d",y);//13
	}
	else
	{
		printf("%d",y);
	}
	return 0;
}
//y=13
