#include <stdio.h>

int main() {
    char name[20];
    int class, age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your class: ");
    scanf("%d", &class);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nName: %s\n", name);
    printf("Class: %d\n", class);
    printf("Age: %d\n", age);

    return 0;
}