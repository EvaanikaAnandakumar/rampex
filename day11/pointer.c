#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value :");
    scanf("pointer : %p",&a);
    int *b=&a;
    printf("pointer: %p",&a);
    return 0;
}