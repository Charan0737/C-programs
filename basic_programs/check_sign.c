#include<stdio.h>
int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
    (num>0)?printf("%d is positive number",num):printf("%d is negative number ",num);
}
