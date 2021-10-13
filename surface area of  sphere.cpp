#include<stdio.h>
#include<math.h>
int main() 
{
	float radius;
	float surface_area;
	printf("enter radius of sphere ;\n");
	scanf("%f",&radius);
	surface_area= 4*(22/7)*radius*radius;
	printf("surface_area of sphere is:%.3f", surface_area);
	return 0;
}