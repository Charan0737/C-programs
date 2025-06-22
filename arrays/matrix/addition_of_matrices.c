#include<stdio.h>
int main()
{
  int m,n,p,q;
  printf("enter the size of matrix A: ");
  scanf("%d%d",&m,&n);
  printf("enter the size of matrix B:");
  scanf("%d%d",&p,&q);
  
  if(m==p && n==q)
 {
  int A[m][n],B[p][q],i,j,c[m][n];
  printf("enter %dX%d elements to store in matrix A:",m,n);
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&A[i][j]);
    }
  }
  printf("enter %dX%d elements to store in matrix B:",p,q);
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    {
      scanf("%d",&B[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
       c[i][j]=A[i][j]+B[i][j];
    }
  }
  for(i=0;i<m;i++)
  {
	  for(j=0;j<n;j++)
	  {
         printf("%d",c[i][j]);
	 }
	 printf("\n");
 }
}
else
printf("its not possible");

}
