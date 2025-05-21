#include <stdio.h>
int celfah(int celsius)
{
    return (celsius * 9 / 5) + 32;
}
int main()
{
    int celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &celsius);
    fahrenheit = celfah(celsius);
    printf("%d Celsius is equal to %d Fahrenheit\n", celsius, fahrenheit);
    return 0;
}