#include<stdio.h> 

int main()
{
    int Amount;
    int Note_2000,Note_500,Note_200,Note_100,Note_50,Note_20,Note_10,Note_5,Note_2,Note_1;
    Note_2000 = Note_500 = Note_200 = Note_100 = Note_50 = Note_20 = Note_10 = Note_5 = Note_2 = Note_1 = 0;
    printf("Enter The Amound : ");
    scanf("%d",&Amount);
    while(Amount !=0)
    {
    if(Amount >=2000)
    {
        Note_2000++;
        Amount = Amount-2000;
    }
    else if(Amount >=500)
    {
        Note_500++;
        Amount = Amount-500;
    }
    else if(Amount >=200)
    {
        Note_200++;
        Amount = Amount-200;
    }
    else if(Amount >=100)
    {
        Note_100++;
        Amount = Amount-100;
    }
    else if(Amount >=50)
    {
        Note_50++;
        Amount = Amount-50;
    }
    else if(Amount >=20)
    {
        Note_20++;
        Amount = Amount-20;
    }
    else if(Amount >=10)
    {
        Note_10++;
        Amount = Amount-10;
    }
    else if(Amount >=5)
    {
        Note_5++;
        Amount = Amount-5;
    }
    else if(Amount >=2)
    {
        Note_2++;
        Amount = Amount-2;
    }
    else if(Amount >=1)
    {
        Note_1++;
        Amount = Amount-1;
    }
    }

    printf("2000 Note : %d \n 500 Note : %d \n 200 Note : %d \n 100 Note : %d \n 50 Note : %d \n 20 Note : %d \n 10 Note : %d \n 5 Note : %d \n 2 Note : %d \n 1 Note : %d \n",Note_2000,Note_500,Note_200,Note_100,Note_50,Note_20,Note_10,Note_5,Note_2,Note_1);

     return 0;
}