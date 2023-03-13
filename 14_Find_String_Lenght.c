#include<stdio.h> 

int main()
{
     int Length=0;
     int i=0;
     char StringName[100];
     printf("Enter Your String : ");
     scanf("%s",StringName);
     while(StringName[i]!='\0')
     {
        Length++;
        i++;
     }
     printf("Your String Lenght is : %d",Length);

     return 0;
}