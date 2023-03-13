#include<stdio.h> 
#include<string.h>

int main()
{
     char StringName[100];
     printf("Enter Your String : ");
     scanf("%s",StringName);
     strupr(StringName);
     printf("Your String is : %s",StringName);
     return 0;
}