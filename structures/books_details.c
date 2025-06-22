#include<stdio.h>
struct books
{
	char title[30],author[30];
	int price;
};
int main()
{
	struct books b[3];
	int i,min,bookindex=0;
	printf("enter the details of books: \n");
	for(i=0;i<3;i++)
	{
		printf("enter the title of book %d: ",i+1);
		scanf(" %[^\n]",b[i].title);
		printf("enter the name of author of book %d: ",i+1);
		scanf(" %[^\n]",b[i].author);
		printf("enter the price of book %d: ",i+1);
		scanf("%d",&b[i].price);
	}
	
	printf("the details of books are: \n");
	for(i=0;i<3;i++)
	{
		printf("title of book %d is: %s\n",i+1,b[i].title);
		printf("name of author of book %d is: %s\n",i+1,b[i].author);
		printf("price of book %d is: %d\n\n\n\n\n",i+1,b[i].price);
	}
	
	min=b[0].price;
	for(i=0;i<3;i++)
	{
	 if(min<b[i].price)
	 {
		 min=b[i].price;
		 bookindex=i;
	 }
 }
 
 printf("the details of highest cost is: \n");
        printf("title of book is: %s\n",b[bookindex].title);
		printf("name of author of book is: %s\n",b[bookindex].author);
		printf("price of book is: %d\n",b[bookindex].price);
 
}
		

