#include<stdio.h> 

int main()
{
     float Lenth,Width;
     float Area_of_Rectangle;
     printf("Enter The Lenth of Rectangle : ");
     scanf("%f",&Lenth);
     printf("Enter The Width of Rectangle : ");
     scanf("%f",&Width);
     Area_of_Rectangle = Lenth * Width;
     printf("Area Of Rectangle is : %.2f",Area_of_Rectangle);
 
     return 0;
}