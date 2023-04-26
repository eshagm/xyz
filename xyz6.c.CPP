#include<stdio.h>
#include<conio.h>

void main()
{
int x=5,y=10,z=15,xyz;
xyz=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x));
printf("x-y-z=%d",xyz);
getch();
}                  