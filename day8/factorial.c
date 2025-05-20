#include <stdio.h>
int factorial (int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main() 
{
    int num=10;
    int result = factorial(num);
    printf("factorial of %d is %d\n",num,result);
    return 0;
}