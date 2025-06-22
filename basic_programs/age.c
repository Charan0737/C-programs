#include<stdio.h>
int main()
{ int age;
	printf("enter your age guru: ");
	scanf("%d",&age);
	(age>18)?printf("the person with age %d is eligible",age):printf("the person with age %d is not eligible",age);
	return 0;
}
