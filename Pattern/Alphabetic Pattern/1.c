/*
ZZZZZ
YYYYY
XXXXX
WWWWW
VVVVV
*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int c;
    char r  ;
    for(r=90;r>=86;r--){
        for(c=0;c<5;c++){
            printf("%c ",r);
        }
        printf("\n");
    }

 
    return 0;
}