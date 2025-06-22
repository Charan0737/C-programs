#include<stdio.h>
int main()
{
	float a,b,c,d,u;
	printf("enter units: ");
	scanf("%f",&u);
	
	if(u<=100)
	{
		a=u*2.5;
	    printf("%f is the bill amount",a);
     }
	else if(u>=101&&u<=200)
	{
	b=u*3.5;
	printf("%f is the bill amount",b);
}
	else if(u>=201&&u<=300)
	{
	c=u*4.5;
	printf("%f is the bill amount",c);
}
	else if(u>300)
	{
	d=u*5.5;
	printf("%f is the bill amount",d);
}
}
