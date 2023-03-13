#include<stdio.h> 

int main()
{
     char Charater;
     printf("Enter Your Character : ");
     scanf("%c",&Charater);
        if((Charater >= 'a' && Charater <='z') || (Charater >= 'A' && Charater <='Z'  ))
        {
            printf("%c Character is Alphabet ",Charater);
        }
        else if(Charater >= '0' && Charater <='9' )
        {
            printf("%c Character is Digits ",Charater);
        } 
        else
        {
             printf("%c Character is Special Character ",Charater);
        }
     
     return 0;
}