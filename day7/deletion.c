#include <stdio.h>
int main()
{
    int n = 6, pos = 2, i;  
    int arr[6] = {35, 40, 45, 50, 55, 60};
    printf("Original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];  
    }
    n--;  
    printf("Array after deletion: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}