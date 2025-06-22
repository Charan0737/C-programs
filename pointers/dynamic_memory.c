#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,add=0,v;
	printf("enter the size of array: ");
	scanf("%d",&n);
	int *p=(int *)malloc(n*sizeof(int));
	printf("enter %d elements to store: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
		add+=p[i];
	}
	printf("the %d is the total sum which is obtained before using relloc\n",add);
	
	
	printf("enter new size: ");
	scanf("%d",&v);
	p=(int *)realloc(p,v*sizeof(int));
	printf("enter %d new numbers: ",v-n);
	for(i=n;i<v;i++)
	{
		scanf("%d",&p[i]);
		add+=p[i];
	}
	free(p);
	printf("%d is the new sum ",add);
}
