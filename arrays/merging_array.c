#include<stdio.h>
int main()
{
	int n[5],a[5],i,b[10];
	
	printf("enter the 1st array values: ");
	for(i=0;i<5;i++)\
	{
		scanf("%d",&n[i]);
	}
	printf("enter the second array valuess: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
     for(i=0;i<5;i++)
     {
		 b[i]=n[i];
	 }
	 for(i=0;i<5;i++)
	 {
		 b[i+5]=a[i];
	 }
	printf("the merged array is: \n");
	 for(i=0;i<10;i++)
	{
		 printf("%d ",b[i]);
	 }
	  printf("\nthe reverse of merged array is: \n");
	 for(i=9;i>=0;i--)
	 printf("%d ",b[i]);
 }
