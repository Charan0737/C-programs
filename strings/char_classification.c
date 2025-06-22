#include<stdio.h>
int main()
{
	char str[20],*p,c;
	int lc=0,uc=0,d=0,oc=0,i;
	printf("enter: ");
	scanf("%[^\n]%*c",str);
	p=str;
	for(i=0;*(p+i)!='\0';i++)
	{
		c=*(p+i);
		if(c>='A'&&c<='Z')
		{
			uc++;
		}
		else if(c>='a'&&c<='z')
		{
			lc++;
		}
		else if(c>='0'&&c<='9')
		{
			d++;
		}
		else
		{
			oc++;
		}
	}
	printf("the total number of lower case letters are: %d\n",lc);
	printf("the total number of upper case case letters are: %d\n",uc);
	printf("the total number of digits letters are: %d\n",d);
	printf("the total number of other letters are: %d\n",oc);
}
			
	
