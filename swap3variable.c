#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two numbers");
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("swapping a=%d ,b=%d",a,b);
    return 0;
}
