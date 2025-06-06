#include <stdio.h>
int main() 
{
    char str[100];
    int uppercase = 0,lowercase = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0') 
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            uppercase++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') 
        {
            lowercase++;
        }
        i++;
    }
    printf("Number of uppercase characters: %d\n", uppercase);
    printf("Number of lowercase characters: %d\n",lowercase);
    return 0;
}