#include<stdio.h>
#include<conio.h>

void main()
{
int x=3,y=4,z=9,xyz;
xyz=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)+(y+z)+(z+x));
printf("x+y+z=%d",xyz);
getch();
}                  