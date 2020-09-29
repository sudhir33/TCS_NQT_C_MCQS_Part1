#include<stdio.h>

int main()
{
	int a=5,b=3,c=7;
	a=c;//a=7
	b=a;//b=7
	c=b;//c=7
	printf("%d  %d  %d",a,b,c);
	return 0;
}
