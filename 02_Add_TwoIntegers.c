#include<stdio.h> 

int main()
{
     int FirstNumber,SecondNumber;
     int Addition;
     printf("Enter The First Number : ");
     scanf("%d",&FirstNumber);
     printf("Enter The Second Number : ");
     scanf("%d",&SecondNumber);
     Addition = FirstNumber + SecondNumber;
     printf("Two Integers Sum is : %d ",Addition);

     return 0;
}