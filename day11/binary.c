#include<stdio.h>
int bin(int n)
{
    if(n==0)
    return 0;
    bin(n/2);
    printf("%d\n",n%2);
}
int main()
{
    int number;
    printf(" Enter a number :");
    scanf(" %d",&number);
    if (number==0)
    printf("0");
    else
    bin(number);
    printf("\n");
    return 0;
}