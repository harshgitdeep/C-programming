
    
   #include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
 char str1[20];

    printf("Enter any string = ");
    gets(str1);
     
    strlwr(str1);
    printf("Print string in lowercase = ");
    printf("%s",str1);
    
    return 0;
}