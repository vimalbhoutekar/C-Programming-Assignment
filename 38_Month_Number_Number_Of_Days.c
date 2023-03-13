#include<stdio.h> 

int main()
{
      int month;
    
    printf("Enter month number (1-12): ");
    scanf("%d", &month); 
 
    if(month == 1)
    {
        printf("Enter month : January \nNumber of days : 31 days");
    }
    else if(month == 2)
    {
    	printf("Enter month : February \nNumber of days : 28 or 29 days");        
    }
    else if(month == 3)
    {
    	printf("Enter month : March \nNumber of days : 31 days");        
    }
    else if(month == 4)
    {
    	printf("Enter month : April \nNumber of days : 30 days");        
    }
    else if(month == 5)
    {
    	printf("Enter month : May \nNumber of days : 31 days");
    }
    else if(month == 6)
    {
    	printf("Enter month : June \nNumber of days : 30 days");        
    }
    else if(month == 7)
    {
    	printf("Enter month : July \nNumber of days : 31 days");        
    }
    else if(month == 8)
    {
        printf("Enter month : August \nNumber of days : 31 days");
    }
    else if(month == 9)
    {
        printf("Enter month : September \nNumber of days : 30 days");
    }
    else if(month == 10)
    {
       printf("Enter month : October \nNumber of days : 31 days");
    }
    else if(month == 11)
    {
        printf("Enter month : November \nNumber of days : 30 days");
    }
    else if(month == 12)
    {
        printf("Enter month : December \nNumber of days : 31 days");;
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }
     return 0;
}