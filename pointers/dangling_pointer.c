#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p=(int *)malloc(1*sizeof(int));
	*p=20;
	printf("the value before freeing: %d\n",*p);
	free(p);
	printf("the value after freeing: %d",*p);
}
	
