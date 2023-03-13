#include<stdio.h> 

int main()
{
     int FirstNumber,SecondNumber;
     printf("Enter The First Number : ");
     scanf("%d",&FirstNumber);
     printf("Enter The Second Number : ");
     scanf("%d",&SecondNumber);
     (FirstNumber > SecondNumber)?(printf("Largest Number is : %d ",FirstNumber)) : (printf("Largest Number is : %d ",SecondNumber));
     return 0;
}