#include<stdio.h>
#include<ctype.h>
int main()
{
   char str[100];
   printf("Enter the alplabet : ");
   fgets(str,100,stdin);
   char ch=str[0];
   if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
   {
       printf("vowels\n");
   }
   else
   {
       printf("consonants\n");
   }
   return 0;
}