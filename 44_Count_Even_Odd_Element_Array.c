#include<stdio.h> 

int main()
{
    int Number;
    int EvenNumber=0,OddNumber=0;
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
        if(ArrayNumber[i] % 2 ==0)
        {
            EvenNumber++;
        }
        else
        {
            OddNumber++;
        }
    }
    printf("\nTotal Even Number is : %d ",EvenNumber);
    printf("\nTotal Odd Number is : %d ",OddNumber);
     return 0;
}