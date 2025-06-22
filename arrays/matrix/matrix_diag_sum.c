#include<stdio.h>
int main()
{
	int i,j,n,sum1=0,sum2=0;
	printf("enter the size of matrix: ");
	scanf("%d",&n);
	
	int a[n][n];
	printf("enter %dX%d numbers to store in a matrix: ",n,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("the matrix is: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=0;i<n;i++)
	{
		
			sum1=sum1+a[i][i];
			sum2=sum2+a[i][n-i-1];
	}
	printf("%d",sum1);
		printf("%d",sum2);
}
