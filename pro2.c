#include<stdio.h>

int main()
{
	int i,a[]={0,2,4,1,3};
	for(i=0;i<5;i++)
	{
		a[i]=a[(a[i]+3)%5];//a[1]=a[0]
	}
	printf("%d ",a[1]);
	return 0;
}
// 1 1 4 1 3
// 0 1 2 3 4
