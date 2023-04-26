#include<stdio.h>
#include<conio.h>

void main()
{
int x=3,y=4,z=5,xyz;
xyz=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
printf("x+y+z=%d",xyz);
getch();
}