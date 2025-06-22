#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,c=0,i,a,sum=0;
	printf("enter: ");
	scanf("%d",&n);
	x=n;
	for(i=0;x!=0;i++)
	{
		c++;
		x=x/10;
	}
	x=n;
	for(i=0;c!=0;i++)
	{
		a=x%10;
		sum+=(int)round(pow(a,c--));
		x=x/10;
	}
	if(sum==n)
	{
		printf("yes");
	}
	else
	printf("no");
}

/*
    Program: Check if a number equals sum of its digits raised to the power of their positions
    Example: 175 → 1^1 + 7^2 + 5^3 = 175 → YES

*/

		
