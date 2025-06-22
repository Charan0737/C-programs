#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person;

    // Input details of the person
    printf("Enter your name: ");
    scanf("%s", person.name);
    printf("Enter your age: \n");
    scanf("%d", &person.age);

    // Display the details of the person
    printf("Person Details:\n");
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);

    return 0;
}



