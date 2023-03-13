#include<stdio.h> 

int main()
{
    int Number;
    int Maximum_Number;
    int Minimum_Number;
    printf("Enter The Size of Array : ");
    scanf("%d",&Number);
    int ArrayNumber[Number];
    for(int i=0;i<Number;i++)
    {
        printf("Enter The [%d] Element : ",i+1);
        scanf("%d",&ArrayNumber[i]);
    }
    printf("\nArray Element is : \n");
    for(int i=0;i<Number;i++)
    {
        printf("%d \t",ArrayNumber[i]);
    }
    Maximum_Number=ArrayNumber[0];
    Minimum_Number=ArrayNumber[0];
    for(int i=0;i<Number;i++)
    {
        if(Maximum_Number < ArrayNumber[i])
        {
            Maximum_Number = ArrayNumber[i];
        }
        if(Minimum_Number > ArrayNumber[i])
        {
            Minimum_Number = ArrayNumber[i];
        }
    }

    printf("\nMaximum Array Element is : %d ",Maximum_Number);
    printf("\nMinimum Array Element is : %d ",Minimum_Number);
     return 0;
}