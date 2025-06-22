#include<stdio.h>
int main()
{
	float a,b,c,d,percentage,total;
	printf("enter the marks of 4 subjects: ");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	total=a+b+c+d;
	percentage=(total/400)*100;
	if(percentage>=85)
	printf("grade A");
	else if(percentage<85 && percentage>=70)
	printf("grade B");
	else if(percentage<70 && percentage>=50)
	printf("grade C");
	else if(percentage<55 && percentage>=40)
	printf("grade D");
	else 
	printf("grade E");
}
