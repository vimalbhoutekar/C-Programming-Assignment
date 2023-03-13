#include<stdio.h> 

int main()
{
     int Maths,Physics,Chemistry,Hindi,English;
     int TotalMarks;
    printf("Eligibility Criteria for an Engineering:\n");
    printf("Marks in Mathematics >= 65\n");
    printf("Marks in Physics >= 55\n");
    printf("Marks in Chemistry >= 50\n");
    printf("Marks in English >= 45\n");
    printf("Marks in Hindi >= 40\n");
    printf("Total in All Three Subject >= 280\n");
    printf("Or Total in Maths and Physics >= 140\n");
    printf("-------------------------------------\n");

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
    printf("\nTotal Marks OF All Subjects : %d\n",TotalMarks);
    printf("\nTotal Marks of Maths and  Physics : %d\n\n",Maths + Physics);

     if(Maths>=65)
     {
        if(Physics>=55)
         {
            if(Chemistry>=50)
            {
                if(English >=45)
                {
                    if(Hindi >=40)
                    {
                        if(TotalMarks >= 280 || (Maths + Physics) >= 140)
                        {
                            printf("The  Candidate is Eligible for Admission.\n");
                        }
                        else
                        {
                            printf("The Candidate is Not Eligible.\n");
                        }
                    }
                    else
                        {
                            printf("The Candidate is Not Eligible.\n");
                        }
                }
                else
                  {
                    printf("The Candidate is Not Eligible.\n");
                  }
            }
            else
               {
                 printf("The Candidate is Not Eligible.\n");
               }
         }
         else
              {
                printf("The Candidate is Not Eligible.\n");
              }
     }
     else
         {
            printf("The Candidate is Not Eligible.\n");
         }
     return 0;
}