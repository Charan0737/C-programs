#include<stdio.h>
void insertionsort(int a[],int n)
{
	int i,j,key;
	printf("Before sorting: ");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && key<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	 }
      printf("\nAfter sorting: ");
      for(i=0;i<n;i++)
      printf("%d",a[i]);
}
int main()
{
	int n,i;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertionsort(a,n);
	return 0;
}

