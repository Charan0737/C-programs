#include <stdio.h>
void reverse(char []);
int main()
{
char str[20];
scanf("%[^\n]%*c",str);
reverse(str);
}
void reverse(char str[])
{
int i,j,l=0,mint;
for(i=0;str[i]!='\0';i++)
l++;
for(i=0,j=l-1;i<j;i++,j--)
{
mint=str[i];
str[i]=str[j];
str[j]=mint;
}
printf("reverse of the string is %s",str);
}
