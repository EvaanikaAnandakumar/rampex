#include <stdio.h>
int power(int x,int y)
{
    int power=1;
    for(int i=0;i<y;i++)
    {
        power=power*x;
    }
    return power;
}
int main()
{
    int x=2;
    int y=4;
    int result=power(x,y);
    printf("%d",result);
    return 0;
}
