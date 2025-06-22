#include<stdio.h>
int main()
{
	int i,p,q,n[10],min,max;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	
	min=max=n[0];
	
	for(i=0;i<10;i++)
	{
		if(n[i]<min)
		{
			min=n[i];
		    p=i;
		}
	
	
	
		if(n[i]>max)
		{
			max=n[i];
		    q=i;
		}
	}
	printf("%d is the smallest number and the index of that number is %d\n",min,p);
	printf("%d is the largest number and the index of that number is %d\n",max,q);
}
		
