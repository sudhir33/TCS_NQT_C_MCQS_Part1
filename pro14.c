#include<stdio.h>

int main()
{
	int s=10,*p;
	p=&s;//234567
	printf("%d   %d",*p,s);
	return 0;
}
