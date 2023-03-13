#include<stdio.h> 

int main()
{
     int Year;
     printf("Enter The Year : ");
     scanf("%d",&Year);

    (Year%4==0 && Year%100!=0) ? printf("LEAP YEAR") : (Year%400 ==0 ) ? printf("LEAP YEAR") : printf("COMMON YEAR");
     return 0;
}