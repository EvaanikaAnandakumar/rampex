#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    printf("After swapping \n");
    swap(&x, &y);
    printf("Value of first number is %d\n", x);
    printf("Value of second number is %d\n", y);
    return 0;
}