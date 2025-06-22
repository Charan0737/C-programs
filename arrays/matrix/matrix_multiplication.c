#include<stdio.h>
int main()
{
	int m,n,p,q,i,j,k;
	printf("enter the size of matrix a: ");
	scanf("%d%d",&m,&n);
	printf("enter the sixze of matrix b: ");
	scanf("%d%d",&p,&q);
	
	if(n==p)
	{
		int a[m][n],b[p][q],c[m][n];
		printf("enter %dX%d elements to store in matrix a: ",m,n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enetr %dX%d elemnts to store in matrix b: ",p,q);
	    for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("the matrix multiplication is: \n");
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}

	else
	printf("matrix multiplication is not posible");
}
		
