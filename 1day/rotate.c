#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], last;
    int n, len, i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    printf("Enter number of rotation: ");
    scanf("%d", &n);
    len = strlen(str);
    n = n % len;  
    while (n--) 
    {
        last = str[len - 1];
        for (i = len - 1; i > 0; i--) 
        {
            str[i] = str[i - 1];
        }
        str[0] = last;
    }
    printf("Rotated string: %s\n", str);
    return 0;
}