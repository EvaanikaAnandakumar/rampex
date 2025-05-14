#include <stdio.h>
int main()
{
    float temp;
    printf("Enter the temparature in celsius:");
    scanf("%f",&temp);
    if(temp <10)
    {
        printf("Wear jacket \n");
    }
    else if(temp>=10&&temp<20){
        printf("Wear sweater \n");
    }
    else
    {
        printf("Wear shirt \n");
    }
    return 0;
}