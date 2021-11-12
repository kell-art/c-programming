#include<stdio.h>
int main()
{
	for(int x=10;x<=20;x++)
	{
		for (int y=1;y<=6;y++)
		{
			for (int z=2;z<=8;z++)
			{
				printf("%d,%d,%d\n",x,y,z);
			}
		}
	}
	return 0;
}
