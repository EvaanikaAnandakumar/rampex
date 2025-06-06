#include <stdio.h>
int main() 
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == '\n') 
        {
            str[i] = '\0';
            break;
        }
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || 
              (str[i] >= 'a' && str[i] <= 'z') || 
              (str[i] >= '0' && str[i] <= '9'))) 
        {
            count++;
        }
    }
    printf("Number of special characters: %d\n", count);
    return 0;
}



