#include<stdio.h>
#include<string.h>
 
int main()
{
 char str1[20],str2[20],z;

    printf("Enter I string = ");
    gets(str1);

    printf("Enter II string = ");
    gets(str2);

    z=strcmp(str1,str2);  //strcmp() compares two strings character by character.
    if(z==0){
        printf("Strings matched");
    }
    else{
        printf("Strings not matched");
    }

    return 0;
}