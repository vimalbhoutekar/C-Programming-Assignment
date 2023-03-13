#include<stdio.h> 

int main()
{
     char Ch;
     printf("Enter The Character : ");
     scanf("%c",&Ch);
    if (Ch=='a' || Ch=='A' || Ch=='e' || Ch=='E' || Ch=='i' || Ch=='I' || Ch=='o' || Ch=='O' || Ch=='u'|| Ch=='U')
    {
        printf("The Character %c is a Vowel.\n", Ch);
    }
    
    else
    {
        printf("The Character %c is a Consonant.\n", Ch);
    }
     return 0;
}