#include<stdio.h> 
#include<stdbool.h>

int main()
{
    int Number;
    printf("Enter The Size of Array : ");
    scanf("%d",&Number);
    int ArrayNumber[Number];
    bool Appeared[Number];
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
    for (int i = 0; i < Number; i++)
    {
        Appeared[i] = false;
    }

    printf("\nUnique Array Numbers is : \n");

    for (int i = 0; i < Number; i++) {
        if (Appeared[i] == false) {
            for (int j = i + 1; j < Number; j++) {
                if (ArrayNumber[i] == ArrayNumber[j]) {
                    Appeared[j] = true;
                }
            }
            printf("%d \t", ArrayNumber[i]);
        }
    }

     return 0;
}