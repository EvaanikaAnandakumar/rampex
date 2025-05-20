#include <stdio.h>
int main() 
{
    int matrix[2][3];
    int i, j, sum;
    printf("Enter the elements of the 2x3 matrix:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Sum of each row:\n");
    for (i = 0; i < 2; i++) 
    {
        sum = 0;
        for (j = 0; j < 3; j++) 
        {
            sum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, sum);
    }
    return 0;
}