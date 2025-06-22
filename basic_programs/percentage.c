#include<stdio.h>
int main()
{
	int a,b,c,d,e,total;
	float percentage;
	printf("enter the marks of five subjects: ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	percentage=((float)total/500)*100;
	printf("%f",percentage);
}
