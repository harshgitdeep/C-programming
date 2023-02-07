/*

1
13
135
1357
13579
*/

#include<stdio.h>
#include<conio.h>
 
int main()
{
    int c,r;
    for(r=1;r<=10;r=r+2){
        for(c=1;c<=r;c=c+2){
            printf("%d",c);
        }
        printf("\n");
    }
 
    return 0;
}