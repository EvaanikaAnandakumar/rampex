#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
 int number = 5;
 printf("factorial of %d is %d\n",number,fact(number));
 return 0;
}