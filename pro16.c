#include<stdio.h>

int main()
{
	static int a[20];
	int i=0;
	a[i]=i;
	printf("%d %d %d",a[0],a[19],i);
	return 0;
}
