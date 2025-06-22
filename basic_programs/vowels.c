#include <stdio.h>
void Vowelsconsonants(char str[]) 
{
	int vowels=0,consonants=0;    
     
    for (int i = 0; str[i] != '\0'; i++)
     {
        char ch=str[i]; 
        
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		{
            (vowels)++;
		}
	    
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
         {
            (consonants)++; 
        }
    }
    printf("Vowels: %d\n", vowels);
      printf("Vowels: %d\n", consonants );
     
    
}

int main() {
    char str[20]; 
    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);
   Vowelsconsonants(str);
    

}

