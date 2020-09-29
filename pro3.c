#include<stdio.h>
int fun(int n)
{
	if(n<=1)
		return 1;
	else
	{
	
		return(fun(n-3)+fun(n-1));
	}
		
}

main()
{
	int n;
	n=fun(6);
	printf("%d",n);
}


