/*
xxxxx
*****
*****
*****
xxxxx
*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int r,c;
   
    for(r=1;r<=5;r++){
        if(r==1 || r==5){ 
            for(c=1;c<=5;c++){
                printf("x");
            }}

        else{
                for(c=1;c<=5;c++){
                printf("*");
            }
            
        }
        printf("\n");
    }

 
    return 0;
}