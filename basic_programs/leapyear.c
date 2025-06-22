#include<stdio.h>
int main()
{
	int a,n;
	printf("enter the year: ");
	scanf("%d",&n);
	a=((n%4==0 && n%100!=0)||(n%400==0));
	if(a==1)
	printf("the given year %d is a leap year",n);
	else
	printf("%d year is not a leap year",n);
}
