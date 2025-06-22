// Problem: Watermelon (Codeforces 4A)
// Check if the given weight can be split into two even parts greater than 0
// Example: 8 → YES (4+4), 7 → NO

#include<stdio.h>
int main()
{
	int n,a,b;
	printf("enter the weight of watermelon: ");
	scanf("%d",&n);
	if (n%2==0)
	{
		a=n/2;
		b=n/2;
		if (a%2!=0)
		{a=a-1;
		b=b+1;}
		printf("the value can be divided into %d and %d ",a,b);
	}
	else
		printf("the given weight is not applicable can be shared");
	
}


