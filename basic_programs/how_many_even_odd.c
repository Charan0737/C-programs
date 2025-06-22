#include<stdio.h>
int main()
{
	int i,even=0,odd=0,n[5];
	
	printf("enter any 5 numbers: ");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(n[i]%2==0)
		even++;
	
	    else
	    odd++;
	}
	printf("total no.of even num: %d\n",even);
	printf("total no.of odd num: %d",odd);
}

