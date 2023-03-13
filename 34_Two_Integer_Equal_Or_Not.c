#include<stdio.h> 

int main()
{
     int FirstNumber,SecondNumber;
     printf("Enter The First Number : ");
     scanf("%d",&FirstNumber);
     printf("Enter The Secod Number : ");
     scanf("%d",&SecondNumber);
     if(FirstNumber == SecondNumber)
     {
        printf("Both Number is Equal ");
     }
     else
     {
        printf("Number is NOT Equal ");
     }
     return 0;
}