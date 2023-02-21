#include<stdio.h>
#include<string.h>
 
int main()
{
 char str1[20],str2[20];

    printf("Enter I string = ");
    gets(str1);

    printf("Enter II string = ");
    gets(str2);

    printf("\n\n-----------------After merging--------------------\n\n");
    
    strcat(str2,str1);
    printf("Merged string = ");
    puts(str2);

    return 0;
}