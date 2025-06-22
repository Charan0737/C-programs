#include<stdio.h>
int main()
{
	int n, sum = 0, m, temp;

	printf("enter a number: ");
	scanf("%d", &n);
	
	temp = n; 
	
	while (temp != 0)
	{
		m = temp % 10;
		sum += m;
		temp = temp / 10;
	}
	
	if (n % sum == 0)
		printf("Yes, it's a Harshad number");
	else
		printf("No, it's not a Harshad number");
}

	
