#include <stdio.h>
int main()
{
    int num, a = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n", num);
    while (a <= 25) 
    {
        printf("%d * %d = %d\n", num, a, num * a);
        a++;
    }
    return 0;
}