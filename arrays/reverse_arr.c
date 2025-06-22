#include<stdio.h>
int main()
{
	int n;
	printf("enter the size of array: ");
	scanf("%d",&n);
	printf("enter %d numbers: ",n);
	int a[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("the reverse of the array is: \n");
	for(i=n-1;i>=0;i--)
	printf("%d",a[i]);
}
	
