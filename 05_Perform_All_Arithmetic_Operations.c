#include<stdio.h> 

int main()
{
     int Number1,Number2;
     int Operation;
     printf("Enter The First Number : ");
     scanf("%d",&Number1);
     printf("Enter The Second Number : ");
     scanf("%d",&Number2);

     printf("\n**********Addition Operation************ \n");
     Operation = Number1 + Number2;
     printf("Addition is : %d \n",Operation);

     printf("\n**********Subtraction Operation************ \n");
     Operation = Number1 - Number2;
     printf("Subtraction is : %d \n",Operation);

     printf("\n**********Multiplication Operation************ \n");
     Operation = Number1 * Number2;
     printf("Multiplication is : %d \n",Operation);

     printf("\n**********Divide Operation************ \n");
     Operation = Number1 / Number2;
     printf("Divide is : %d \n",Operation);

     printf("\n**********Modulus Operation************ \n");
     Operation = Number1 % Number2;
     printf("Modulus is : %d \n",Operation);


     return 0;
}