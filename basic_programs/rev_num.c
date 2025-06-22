#include<stdio.h>
int main()
{
	int n,c,rev=0;
	printf("enter a number to reverse: ");
	scanf("%d",&n);
	while(n!=0)
	{
		c=n%10;
		rev=rev*10+c;
		n=n/10;
	}
	printf("%d is the reverse of given number",rev);
}

