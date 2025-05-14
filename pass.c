#include <stdio.h>
int main()
{
    float subject1, subject2, subject3, subject4, subject5, average;
    int pass=1;
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
   float passingMark = 35.5;
    if (subject1 < passingMark)
    {
        printf("You failed in subject 1\n");
        pass = 0;
    }
    if (subject2 < passingMark) {
        printf("You failed in subject 2\n");
        pass = 0;
    }
    if (subject3 < passingMark) {
        printf("You failed in subject 3\n");
        pass = 0;
    }
    if (subject4 < passingMark) {
        printf("You failed in subject 4\n");
        pass = 0;
    }
    if (subject5 < passingMark) {
        printf("You failed in subject 5\n");
        pass = 0;
    }
    float sum = subject1 + subject2 + subject3 + subject4 + subject5;
    average = sum / 5;
    printf("The sum of the five subjects is: %f\n", sum);
    printf("The average of the 5 subjects is: %f\n", average);
    if (pass) {
        printf("Congratulations! You passed all subjects.\n");
    } else {
        printf("Sorry, you have failed in one or more subjects.\n");
    }
    return 0;
}
