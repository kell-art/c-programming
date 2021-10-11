#include<stdio.h>
#include<math.h>
int main()
{
int radius;
int volume;
printf("enter radius\n");
scanf("%d",&radius);
volume=(4/3) * M_PI * radius * radius * radius ;
printf("volume is=%d", volume);
return 0;
}
