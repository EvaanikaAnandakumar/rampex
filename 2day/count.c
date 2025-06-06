#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, digit_count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') 
    {
        if (str[i] >= '0' && str[i] <= '9') 
        {
            digit_count++;
        }
        i++;
    }
    printf("Output: %d\n", digit_count);
    return 0;
}