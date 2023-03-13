#include<stdio.h> 

int main()
{
     static float ConstantMultiply=0.304;
     float Feet;
     float Meter;
     printf("Enter The Feet To Convert To Meter : ");
     scanf("%f",&Feet);
     Meter = Feet * ConstantMultiply;
     printf("Feet To Meter is : %.3f ",Meter);

     return 0;
}