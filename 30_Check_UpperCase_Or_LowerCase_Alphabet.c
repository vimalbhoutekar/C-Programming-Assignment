#include<stdio.h> 

int main()
{
     char Alphabet;
     printf("Enter The Alphabet : ");
     scanf("%c",&Alphabet);
     if(Alphabet >='a' && Alphabet <='z')
     {
        printf("LowerCase Alphabet");
     }
     if(Alphabet >='A' && Alphabet <='Z')
     {
        printf("UpperCase Alphabet");
     }
     return 0;
}