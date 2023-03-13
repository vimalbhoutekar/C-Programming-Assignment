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
    printf("\nArray Element is : \n");
    for(int i=0;i<Number;i++)
    {
        printf("%d \t",ArrayNumber[i]);
    }
     return 0;
}