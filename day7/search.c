#include <stdio.h>
int main()
{
    int found=0;
    int arr[]={8,10,15,20,13};
    int key=10;
    for(int i=0;i<4;i++)
    {
        if(arr[i]==key){
            found=1;
            break;
        }
    }
    if(found)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}