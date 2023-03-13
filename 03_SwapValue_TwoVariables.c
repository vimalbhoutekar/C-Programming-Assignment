#include<stdio.h> 

int main()
{
    int FirstValue,SecondValue;
    printf("Enter The First Value : ");
    scanf("%d",&FirstValue);
    printf("Enter The Second Value : ");
    scanf("%d",&SecondValue);
    printf("Before Swaping Value \n");
    printf("FirstValue : %d \t SecondValue : %d \n",FirstValue,SecondValue);

    FirstValue = FirstValue + SecondValue;
    SecondValue = FirstValue - SecondValue;
    FirstValue = FirstValue - SecondValue;

    printf("After Swaping Value \n");
    printf("FirstValue : %d \t SecondValue : %d \n",FirstValue,SecondValue);
     return 0;
}