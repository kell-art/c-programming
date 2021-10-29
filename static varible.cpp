#include<stdio.h>
void function()
{
	int a=20;//local variable
	static int b=30;//static variable
	a=a+10;
	b=b+10;
	printf("n%d,%d",a,b);
}
int main()
{
	function();
	function();
	function();
	return 0;
}