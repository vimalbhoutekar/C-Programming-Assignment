#include<stdio.h> 

int main()
{
    int ArrayNumber[100];
    int Number;
    int Position,Value;
    printf("Enter The Size of Array : ");
    scanf("%d",&Number);
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
    printf("\nEnter The Position To Insert an Element : ");
    scanf("%d",&Position);
    printf("Enter The Element Value To Insert an Array : ");
    scanf("%d",&Value);
    for(int i=Number-1;i>=Position-1;i--)
    {
        ArrayNumber[i+1]=ArrayNumber[i];
    }
    ArrayNumber[Position-1]=Value;
    printf("\nAfter Insert Array Element is : \n");
    for(int i=0;i<=Number;i++)
    {
        printf("%d \t",ArrayNumber[i]);
    }

     return 0;
}