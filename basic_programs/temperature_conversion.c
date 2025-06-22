#include<stdio.h>
int main()
{
    float c, f;
    int choice;
    printf("1. celsius to fahrenheit\n");
    printf("2. fahrenheit to celsius\n");
    printf("enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("enter temperature in celsius: ");
        scanf("%f", &c);
        f = (c * 9 / 5) + 32;
        printf("temperature in fahrenheit = %.2f\n", f);
    }
    else if(choice == 2)
    {
        printf("enter temperature in fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("temperature in celsius = %.2f\n", c);
    }
    else
    {
        printf("invalid choice");
    }

    return 0;
}
