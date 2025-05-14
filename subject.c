#include <stdio.h>
int main()
{
    float subject1, subject2, subject3, subject4, subject5, average;
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    printf("Enter marks for subject 4: ");
    scanf("%f", &subject4);
    printf("Enter marks for subject 5: ");
    scanf("%f", &subject5);
   float sum = subject1 + subject2 + subject3 + subject4 + subject5;
    average =  sum / 5;
    printf("the sum of five subject is:%f\n",sum);
    printf("The average of the 5 subjects is: %f\n", average);
    return 0;
}