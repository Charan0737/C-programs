//addition of rows,columns in a matrix
#include<stdio.h>
int main()
{
	int i,j,m,n,sum;
	printf("enter the size of matrix: ");
	scanf("%d%d",&m,&n);
	int A[m][n];
	printf("enter the %dX%d values to store in matrix: ",m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("the row additions are: \n");
	for(i=0;i<m;i++)
	{ 
		sum=0;
		for(j=0;j<n;j++)
		{
			sum+=A[i][j];
		}
			printf("the sum of %d row is : %d \n",i+1,sum);
}

printf("column elements addition is: \n");
for(i=0;i<m;i++)
{
	sum=0;
	for(j=0;j<n;j++)
	{
		sum+=A[j][i];
	}
	printf("addition of %d column is: %d\n",i+1,sum);
}

}
	
