#include <stdio.h>
int main()  
{
    int matrix[2][3];
    int rowSum;
    printf("Enter 6 integers for a 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) 
    {
        rowSum = 0;
        for (int j = 0; j < 3; j++) 
        {
            rowSum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i, rowSum);
    }
    return 0;
}
