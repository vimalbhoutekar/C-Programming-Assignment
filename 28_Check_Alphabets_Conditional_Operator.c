#include<stdio.h> 

int main()
{
     char Alphabet;
     printf("Enter The Alphabet : ");
     scanf("%c",&Alphabet);

     (Alphabet >='a' && Alphabet <='z') ? (printf("This is Alphabet ")) : (Alphabet >='A' && Alphabet <='Z') ? (printf("This is Alphabet")) : (printf("This is NOT Alphabet "));
     return 0;
}