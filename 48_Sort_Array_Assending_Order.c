#include<stdio.h> 

int main()
{
    int Number;
    printf("Enter The Size of Array : ");
    scanf("%d",&Number);
    int ArrayNumber[Number];
    for(int i=0;i<Number;i++)
    {
        printf("Enter The [%d] Element : ",i+1);
        scanf("%d",&ArrayNumber[i]);
    }
    printf("\nBefore Sort Array Element is : \n");
    for(int i=0;i<Number;i++)
    {
        printf("%d \t",ArrayNumber[i]);
    }
    for(int i=0;i<Number;i++)
    {
        for(int j=i+1;j<Number;j++)
        {
            if(ArrayNumber[j] < ArrayNumber[i])
            {
                int temp;
                temp=ArrayNumber[i];
                ArrayNumber[i]=ArrayNumber[j];
                ArrayNumber[j]=temp;
            }
        }
    }
    printf("\nAfter Sort Array Element is : \n");
    for(int i=0;i<Number;i++)
    {
        printf("%d \t",ArrayNumber[i]);
    }
     return 0;
}