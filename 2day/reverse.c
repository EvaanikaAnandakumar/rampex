#include <stdio.h>
int main() 
{
    char str[100];
    int i = 0, j, temp;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  
    while (str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    for (j = 0; j < i / 2; j++) 
    {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
    str[i] = '\0';
    printf("Output: %s\n", str);
    return 0;
}