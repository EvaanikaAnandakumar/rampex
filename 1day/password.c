#include <stdio.h>
int main() 
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);  
    printf("Password format: ");
    for (i = 0; str[i] != '\0'; i++)
    {
        printf("*");
    }
    return 0;
}