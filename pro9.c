#include<stdio.h>

int main()
{
	int x=0,y=0,z;
	for(z=0;z<5;z++)
	{
		if((++x>2)|| (++y>2))//7>2 ||
		{
			x++;
		}
	}
	printf("%d %d",x,y);//8 2
	return 0;
}

//x=8
//y=2
//z=5



