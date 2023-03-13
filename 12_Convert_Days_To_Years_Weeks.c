#include <stdio.h> 
int main()
{
    int Days, Years, Weeks;
    printf("Enter The Days : ");
    scanf("%d",&Days);

    Years = Days/365; 
    Weeks = (Days % 365)/7;
    Days = Days- ((Years*365) + (Weeks*7));

    printf("Years : %d \t Weeks : %d \t Days : %d \n", Years,Weeks,Days);
  
    return 0;
}