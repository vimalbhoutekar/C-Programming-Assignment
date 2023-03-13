#include<stdio.h> 

int main()
{
    int Number,SumOfArray=0;
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
    for(int i=0;i<Number;i++)
    {
        SumOfArray = SumOfArray + ArrayNumber[i];
    }
    printf("\nTotal Array Element Sum is : %d ",SumOfArray);
     return 0;
}