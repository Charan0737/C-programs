#include<stdio.h>
void copy(char str1[20],char str2[20]);
int main()
{
	char str1[20],str2[20];
    printf("enter string 1 elements to store: ");
    scanf("%[^\n]%*c",str1);
    copy(str1,str2);
    printf("the string str2 after copying from str1 is: %s",str2);
}
void copy(char str1[20],char str2[20])
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		*(str2+i)=*(str1+i);
	}
	str2[i]='\0';
}
