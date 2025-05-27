#include<stdio.h>
int main()
{
    int a=10;
    int b=26;
    int c;
    int*ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    c=*ptr1+*ptr2;
    printf("%d",c);
}