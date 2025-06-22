#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	
	int a[n],i,sum=0,product=1;
	printf("enter %d numbers to store in array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	for(i=0;i<n;i++)
	{
		product*=a[i];
	}
	
	printf("the sum of the given numbers is %d\n",sum);
	printf("the product of the given numbers is %d",product);
}
