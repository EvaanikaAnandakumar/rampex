#include <stdio.h>
int sum(int n) 
{
    if (n == 0) 
    {
        return 0;
    } else
    {
        return (n % 10) + sum(n / 10);
    }
}
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of digits is: %d\n", sum(num));
    return 0;
}