#include<stdio.h> 

int main()
{
     int Number1,Number2,Number3;
     printf("Enter The First Number : ");
     scanf("%d",&Number1);
     printf("Enter The Second Number : ");
     scanf("%d",&Number2);
     printf("Enter The Third Number : ");
     scanf("%d",&Number3);
    if(Number1 > Number2)
    {
        if(Number1 > Number3)
        {
            printf("Largest Number is : %d ",Number1);
        }
        else
        {
            printf("Largest Number is : %d ",Number3);
        }
    }
    else if(Number2 > Number3)
    {
        printf("Largest Number is : %d ",Number2);
    }
    else
    {
        printf("Largest Number is : %d ",Number3);
    }
     return 0;
}