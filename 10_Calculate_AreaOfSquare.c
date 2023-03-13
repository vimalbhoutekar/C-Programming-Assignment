#include<stdio.h> 

int main()
{
     float Side;
     float Area_of_Square;
     printf("Enter The Side of Square : ");
     scanf("%f",&Side);
     Area_of_Square = Side * Side;
     printf("Area Of Square is : %.2f",Area_of_Square);
     return 0;
}