#include<stdio.h>
int main()
{
    int i,min;
    int arr[]={6,4,7,8,9};
    min=arr[0];
    for(i=1;i<5;i++)
    {
     if(min>arr[i])
     {
             min=arr[i];
     }
    }
    printf("min %d",min);
}