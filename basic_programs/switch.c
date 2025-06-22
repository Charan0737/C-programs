#include<stdio.h>
int main()
{
	char v;
	printf("enter a alphabet: ");
	scanf("%c",&v);
	
	if ((v>='A' && v<='Z')||(v>='a' && v<='z'))
	{
	 switch (v)
	 {
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		printf("is a vowel");
	   break;
	   default :printf("it is not vowel");
	 }
 }
	    else{ printf("it is a consonant");}
	} 

	 
