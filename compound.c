#include <stdio.h>
int main()
{
    int a = 14, b = 15 ,c = 20;
    int result;
    result = a + b * c - a / c;
    printf("Expression: a + b * c - a / c\n");
    printf("With values: %d + %d * %d - %d / %d\n", a, b, c, a, c);
    printf("Result = %d\n", result);
    return 0;
}
