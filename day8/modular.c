#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    return a/b;
}
int main()
{
   printf("%d\n",add(9,17));
   printf("%d\n",sub(9,17));
   printf("%d\n",mul(9,17));
   printf("%d\n",division(40,2));
   return 0;
}