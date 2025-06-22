#include<stdio.h>
#include<math.h>

int main()
{
	int n, i, c = 1;
	printf("enter a number: ");
	scanf("%d", &n);
	
	if(n < 2)
	{
		printf("not a prime");
		return 0;
	}
	
	for(i = 2; i <= sqrt(n); i++)  
	{
		if(n % i == 0)
		{
			c = 0;
			break;
		}
	}
	
	if(c == 1)
	{
		printf("its prime");
	}
	else
	{
		printf("not");
	}
	
	return 0;
}
