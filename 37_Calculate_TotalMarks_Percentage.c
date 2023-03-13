#include<stdio.h> 

int main()
{
     int Maths,Physics,Chemistry,Hindi,English;
     float TotalMarks,Percentage;
    printf("Enter The Mathematics Marks : ");
    scanf("%d",&Maths);
    printf("Enter The Physics Marks : ");
    scanf("%d",&Physics);
    printf("Enter The Chemistry Marks : ");
    scanf("%d",&Chemistry);
    printf("Enter The English Marks : ");
    scanf("%d",&English);
    printf("Enter The Hindi Marks : ");
    scanf("%d",&Hindi);

    TotalMarks = Maths + Physics + Chemistry + Hindi + English;
    Percentage = TotalMarks/5;
    printf("\nTotal Marks OF All Subjects : %.2f\n",TotalMarks);
    printf("\nPercentage is : %.2f\n",Percentage);

    if(Percentage >=60 && Percentage <=100)
    {
        printf("First Division \n");
    }
    else if(Percentage >=50 && Percentage <=59)
    {
        printf("Second Division \n");
    }
    if(Percentage >=40 && Percentage <=49)
    {
        printf("Third Division \n");
    }
    else
    {
        printf("FAIL \n");
    }


     return 0;
}