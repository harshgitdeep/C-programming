#include<stdio.h>
#include<conio.h>
 
int main()
{
 char str1[20];

    printf("Enter any string \n");
//  scanf("%s",&str1);           Its doesn't accept spaces, so we will use gets instead of scanf
    
    gets(str1);
    printf("%s",str1);
   
    return 0;
}