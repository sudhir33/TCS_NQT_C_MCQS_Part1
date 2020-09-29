#include<stdio.h>
static int y=1;
int main()
{
	static int z;
	int a;
	printf("%d   %d  %d",y,z,a);
	return 0;
}
