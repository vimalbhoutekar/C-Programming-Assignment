#include<stdio.h> 

int main()
{
    int Number,Counter=0;
    printf("Enter The Size of Array : ");
    scanf("%d",&Number);
    int ArrayNumber[Number];
    int CounterArray[Number];
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
        Counter=1;
        if(ArrayNumber[i] != -1)
        {
            for(int j=i+1;j<Number;j++)
            {
                if(ArrayNumber[i] == ArrayNumber[j])
                {
                    Counter++;
                    ArrayNumber[j]=-1;
                }
            }

        }
        CounterArray[i]=Counter;
    }
    for(int i=0;i<Number;i++)
    {
        if(ArrayNumber[i] != -1)
        {
            printf("\nElement %d is Count : %d \n",ArrayNumber[i],CounterArray[i]);
        }
    }
     return 0;
}