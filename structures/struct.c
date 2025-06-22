#include<stdio.h>

struct student{
	char name[30];
	int rollno;
	char branch[20];
};

int main()
{
	struct student students[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("enter the details of student %d\n",i+1);
		
		printf("enter name: ");
		scanf("%s",students[i].name);
		printf("enter roll no: ");
		scanf("%d",&students[i].rollno);
		printf("enter branch: ");
		scanf("%s",students[i].branch);
	}
	
	for(i=0;i<5;i++)
	{
		printf("the details of student %d are: \n",i+1);
		printf("%s\n",students[i].name);
		printf("%d\n",students[i].rollno);
		printf("%s\n",students[i].branch);
	}
}
