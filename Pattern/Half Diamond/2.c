/*
5    
54   
543  
5432 
54321
5432 
543  
54   
5
*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int c,r;
    for(r=5;r>=1;r--){
        for(c=5;c>=r;c--){
            printf("%d",c);
        }
        printf("\n");
    }
    for(r=1;r<=5;r++){
        for(c=5;c>r;c--){
            printf("%d",c);
        }
        printf("\n");
    }
 
    return 0;
}