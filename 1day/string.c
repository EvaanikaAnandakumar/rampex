#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], ch;
    int i, found = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter a character to search: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch) 
        {
            printf("Character present at position %d\n", i);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("Character not found.\n");
    }
    return 0;
}
