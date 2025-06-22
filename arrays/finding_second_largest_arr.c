#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of the array: ");
	scanf("%d",&n);
	
	int a[n],i,large,second;
	printf("enter %d number to store in a array: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=second=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		{
			second=large;
			large=a[i]; 
		}
		else if(a[i]>second && a[i]!=large)
		{
			second=a[i];
		}
	}
         printf("the second largest number is %d",second);
}
		
