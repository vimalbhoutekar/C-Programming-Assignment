#include<stdio.h> 
#include<string.h>

int main()
{
     char StringFirst[100],StringSecond[100];
     printf("Enter The First String : ");
     scanf("%s",StringFirst);
     printf("Enter The Second String : ");
     scanf("%s",StringSecond);
     if(strcmp(StringFirst,StringSecond)==0)
     {
        printf("String is Equal ");
     }
     else
     {
        printf("String is Not Equal ");
     }

     return 0;
}