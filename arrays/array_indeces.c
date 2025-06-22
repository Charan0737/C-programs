#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,target;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int *a=(int*)malloc(n * sizeof(int));
	printf("enter the elements to store in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the target: ");
	scanf("%d",&target);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==target)
			{
				printf("%d,%d are the indeces",i,j);
			}
		}
	}
}
				
		
	
