 #include<stdio.h> 
 
 int main()
 {
     char StringName[50];
     int i=0;
     printf("Enter The String : ");
     scanf("%s",StringName);
     while(StringName[i] != '\0')
     {
        if(StringName[i] >='a' && StringName[i] <='z')
        {
            StringName[i]=StringName[i]-32;
        }
        i++;

     }

     printf("Your UpperCase String is : %s",StringName);
     return 0;
 }