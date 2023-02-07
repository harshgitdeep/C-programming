/*
A
AB
ABC
ABCD
ABCDE
ABCD
ABC
AB
A
*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int r;
    char c;
    for(r=1;r<=5;r++){
        for(c=65;c<=64+r;c++){
            printf("%c",c);
        }
        printf("\n");
    }
    for(r=4;r>=1;r--){
        for(c=65;c<=64+r;c++){
            printf("%c",c);
        }
        printf("\n");
    }
 
    return 0;
}