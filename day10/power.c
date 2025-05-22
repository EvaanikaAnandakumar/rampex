#include <stdio.h>
int power(int x, int y) 
{
    if (y == 0)
        return 1;            
    else
        return x * power(x, y - 1); 
}
int main() 
{
    int x, y;
    printf("Enter the value for x: ");
    scanf("%d", &x);
    printf("Enter the value for y: ");
    scanf("%d", &y);
    {
        int result = power(x, y);
        printf("%d^%d = %d\n", x, y, result);
    }
    return 0;
}