#include<stdio.h> 

int main()
{
     int radius;
     float Pie=3.14;
     float Area_of_Circle;
     printf("Enter The Radius Value : ");
     scanf("%d",&radius);
     Area_of_Circle = Pie*radius*radius;
     printf("Area of Circle is : %.2f",Area_of_Circle);
     return 0;
}