#include<stdio.h> 

int main()
{
     int Age;
     printf("Enter Your Age : ");
     scanf("%d",&Age);
     if(Age >=18)
     {
        printf("You Can Eligible For Voting ");
     }
     else
     {
        printf("You Can NOT For Eligible For Voting");
     }
     return 0;
}