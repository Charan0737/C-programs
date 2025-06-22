#include<stdio.h>
int main()
{
	char v;
	float a,b;
	printf("enter your input in form (eg 2 + 3) :");
	scanf("%f %c %f",&a,&v,&b);
	
	switch(v)
	{
		case '+':
		printf("addition is %f\n",a+b);
		break;
		case '-':
		printf("substration is %f\n",a-b);
		break;
		case '*':
		printf("multiplication is %f\n",a*b);
		break;
		case '/':
		printf("division is %f\n",a/b);
		break;
		case '%':
		printf("modulo division is %d\n",(int)a%(int)b);
		break;
		default:
		printf("operation is not possible");
	}
}
		
	
