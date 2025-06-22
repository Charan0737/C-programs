#include<stdio.h>
int main()
{
	float r,pi=3.14,area=0,perimeter=0;
	printf("enter the radius of circle: ");
	scanf("%f",&r);
	area=pi*r*r;
	perimeter=2*pi*r;
	printf("%f\n",area);
	printf("%f",perimeter);
}
