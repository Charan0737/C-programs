#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float x,y;
	printf("enter a,b,c values: ");
	scanf("%d%d%d",&a,&b,&c);
	d=sqrt(pow(b,2)-4*a*c);
	if(d<0)
	printf("the roots are imaginary");
	else if(d==0)
	{printf("the roots are equal\n");
	x=(-b+d/(2*a));
	y=(-b-d/(2*a));
	printf("the two roots are %.3f %.3f\n",x,y);}
	else
	{printf("the roots are equal and distinct\n");
	x=(-b+d/(2*a));
	y=(-b-d/(2*a));
	printf("the two roots are %.3f %.3f",x,y);}
}
	
	
	
