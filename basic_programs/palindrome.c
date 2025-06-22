#include<stdio.h>
int main()
{
	int n,rev=0,c,x;
	printf("enter a number to check weather it is a palindrome or not: ");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		c=n%10;
		rev=rev*10+c;
		n=n/10;
	}
	if(x==rev)
	printf("it is a palindrome");
	else
	printf("it is not a palindrome");
}

