#include<stdio.h> 
#include<string.h>

int main()
{
     char StringName[100];
     char ReverseString[100];
     int i,j=0;
     int LengthString;
     printf("Enter Your String : ");
     scanf("%s",StringName);
     LengthString = strlen(StringName);
     for(i=LengthString-1;i>=0;i--)
     {
        ReverseString[j]=StringName[i];
        j++;
     }
     ReverseString[j]='\0';

     printf("Your Reverse String is : %s",ReverseString);
     return 0;
}