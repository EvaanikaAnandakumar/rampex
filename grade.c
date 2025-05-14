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
     char grade;
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("the sum of five subject is:%f\n",sum);
    printf("The average of the 5 subjects is: %f\n", average);
    printf("The grade is: %c\n", grade);
    return 0;
}