#include<stdio.h> 

int main()
{
     int Number;
     printf("Enter The Number : ");
     scanf("%d",&Number);
     if(Number==0)
     {
        printf("Number is Zero ");
     }
     else if(Number > 0)
     {
        printf("Number is Positive ");
     }
     else
     {
        printf("Number is Negative ");
     }
     return 0;
}