#include<stdio.h>
#include<conio.h>
#include<string.h>
 
int main()
{
 char str1[20];

    printf("Enter any string = ");
    gets(str1);

    strrev(str1);
    printf("Reversed string = ");
    printf("%s",str1);
    printf("\n");

    return 0;
}