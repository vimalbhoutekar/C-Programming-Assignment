// C Program to count number of alphabets, digits and special characters in string

#include<stdio.h> 

int main()
{
     char StringName[100];
     int Alphabets=0,Digits=0,Special_Character=0;
     printf("Enter Your String : ");
     scanf("%s",StringName);
     for(int i=0;StringName[i] !='\0';i++)
     {
        if((StringName[i] >= 'a' && StringName[i] <='z') || (StringName[i] >= 'A' && StringName[i] <='Z'  ))
        {
            Alphabets++;
        }
        else if(StringName[i] >= '0' && StringName[i] <='9' )
        {
            Digits++;
        }
        else
        {
            Special_Character++;
        }
     }

     printf("Alphabets is : %d \t Digits is : %d \t Special Character is : %d \n",Alphabets,Digits,Special_Character);
     
     return 0;
}