#include<stdio.h> 
#include<string.h>

int main()
{
     char FirstString[100],SecondString[100];
     printf("Enter The First String : ");
     scanf("%s",FirstString);
     printf("Enter The Second String : ");
     scanf("%s",SecondString);
     strcat(FirstString,SecondString);
     printf("Your String Is : %s",FirstString);
     return 0;
}