/*
1
12
123
1234
12345

using nested while
*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int c,r;
    r=1;
    while(r<=5){
        c=1;
        while(c<=r)
        {
            printf("%d",c);
            c++;
        }
    
        r++;
        printf("\n");
    }
    return 0;
}