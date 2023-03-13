#include<stdio.h> 

int main()
{
     int Number;
     printf("Enter The Number : ");
     scanf("%d",&Number);
     if(Number % 2 ==0)
     {
        printf("%d Number is Even ",Number);
     }
     else
     {
        printf("%d Number is Odd ",Number);
     }
     return 0;
}