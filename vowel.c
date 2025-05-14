#include<stdio.h>
 int main()
 {
     char ch;
     printf("enter alphabet:");
     scanf("%c",&ch);
     if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
     {
         printf("alphabet  is a vowel %c");
     }
     else
     {
         printf(" alphabet is a consonants %c");
     }
     return 0;
 }