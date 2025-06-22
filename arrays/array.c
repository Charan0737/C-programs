#include<stdio.h>
#define size 12
int main()
{
	int i,n[size],total=0;
	printf("enter %d numbers: ",size);
	for(i=1;i<size;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=1;i<size;i++)
	{
		total=total+n[i];
	}
		
		
	printf("%d",total);
}
	
