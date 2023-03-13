 #include<stdio.h> 
 
 int main()
 {
     char StringName[50];
     int i=0;
     int UpperCase=0,LowerCase=0;
     printf("Enter The String : ");
     scanf("%s",StringName);
     while(StringName[i] != '\0')
     {
        if(StringName[i] >='A' && StringName[i] <='Z')
        {
            UpperCase++;
        }
        if(StringName[i] >='a' && StringName[i] <='z')
        {
            LowerCase++;
        }
        i++;

     }

     printf("UpperCase Letter is : %d \t LowerCase Letter is : %d \n",UpperCase,LowerCase);
     return 0;
 }