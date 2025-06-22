#include<stdio.h>
void a();
int b(int,int);
int main()
{
	a();
	printf("1");
}
void a()
{
	int x=b(10,20);
	printf("%d",x);
	printf("2");
}
int b(int x,int y)
{
	return x+y;
	printf("3");
}
