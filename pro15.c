#include<stdio.h>
int f(int a)
{
	a=a>30?30:30;
	return a;
}
int main()
{
	int b;
	b=f(30);
	printf("%d",b);
	return 0;
}
