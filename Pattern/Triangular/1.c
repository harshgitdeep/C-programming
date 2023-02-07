/*
1
12
123
1234
12345
*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int c,r;
    for(r=1;r<=5;r++){
        for(c=1;c<=r;c++){
            printf("%d",c);
        }
        printf("\n");
    }
 
    return 0;
}