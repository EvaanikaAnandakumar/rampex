#include <stdio.h>
int main()
{
    int n = 5, num = 35, pos = 1, i;
    int arr[6];
    for (i = 0; i < n; i++)
    {
        arr[i] = num++;
    }
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = 40;
    printf("The array after insertion: ");
    for (i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}