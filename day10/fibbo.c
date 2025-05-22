#include <stdio.h>
int fibbo(int n) 
{
    if (n == 0) 
    {
        return 0;  
    }
    else if (n == 1)
    {
        return 1;  
    }
    else
    {
    return fibbo(n - 1) + fibbo(n - 2);
    }
}
int main() 
{
    int number,i,n;
    printf("Enter the numbers: ");
    scanf("%d", &number);
    printf("Fibonacci number at position %d is: %d\n", number, fibbo(number));
    printf("Fibonacci series:");
    for (i=0;i<number;i++)
    {
        printf(" %d",fibbo(i));
    }
    return 0;
}