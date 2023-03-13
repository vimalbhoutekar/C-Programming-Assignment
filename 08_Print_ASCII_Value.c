#include<stdio.h> 

int main()
{
    int Number;
    printf("Enter the Number of The ASCII Value : ");
    scanf("%d",&Number);

    for(char ch=0;ch<=Number;ch++)
    {
         printf("The ASCII value of %c is : %d \n", ch, ch);
    }

     return 0;
}