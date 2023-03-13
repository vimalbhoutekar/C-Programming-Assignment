#include<stdio.h> 

int main()
{
     float First_Number,Seocnd_Number;
     float Multiply;
     printf("Enter The First Number : ");
     scanf("%f",&First_Number);
     printf("Enter The Second Number : ");
     scanf("%f",&Seocnd_Number);
     Multiply = First_Number * Seocnd_Number;
     printf("Multiply is : %.2f ",Multiply);

     return 0;
}