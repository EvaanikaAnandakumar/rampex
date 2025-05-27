#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    int vowel=0;
    int consonants=0;
   
    printf("enter the alphabet:");
    fgets(str,100,stdin);
    for(int i=0;str[i]!='\0';i++)
    {
        int ch=tolower(str[i]);
        if(isalpha(ch))
    {
        if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch =='I'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        {
            vowel++;
        }
        else
        {
          consonants++;
        }
    }
    }
printf("vowels:%d\n",vowel);
printf("consonsnt:%d\n",consonants);
return 0;
}