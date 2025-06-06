#include <stdio.h>
int main() 
{
    char str[100];
    int i = 0, space_count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    while (str[i] != '\0') 
    {
        if (str[i] == ' ') 
        {
            space_count++;
        }
        i++;
    }
    printf("Output: %d\n", space_count);
    return 0;
}