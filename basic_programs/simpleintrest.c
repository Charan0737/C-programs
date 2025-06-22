#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("enter the principle amount:\n");
	scanf("%f",&p);
	printf("enter the time period:\n");
	scanf("%f",&t);
	printf("enter the rate of intrest:\n");
	scanf("%f",&r);
	si=(p*t*r/100);
	printf("simple intrest is %.2f",si);
	return 0;
}
	
	
	
	
