#include <stdio.h>
int Palindrome(int num)
{
    int reversed = 0, remainder, original = num;
    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (Palindrome(num))
    {
        printf("It is a Palindrome\n");
    } else
    {
        printf("It is not a palindrome\n");
    }
    return 0;
}