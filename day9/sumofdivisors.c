#include <stdio.h>
int divisor(int n) 
{
    int count = 0;
    int sum = 0;
    printf("Divisors of %d are: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0) 
        {
            printf("%d ", i);
            sum += i;  
            count++;
        }
    }
    printf("\n");
    return sum;  
}
int main() 
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int sumofdivisors = divisor(number);
    printf("Sum of divisors: %d\n", sumofdivisors);
    return 0;
}