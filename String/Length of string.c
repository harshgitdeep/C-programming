#include<stdio.h>
#include<string.h>
 
int main()
{
 char str1[20],size;

    printf("Enter any string = ");
    gets(str1);

    size=strlen(str1);
    printf("Number of characters of string(including spaces) = ");
    printf("%d",size);

    return 0;
}