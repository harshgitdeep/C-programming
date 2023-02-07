/*
            1 2 3 4 5
            1 2 3 4 5              if all are same then print --> r
            1 2 3 4 5              if diffrent then print     --> c
            1 2 3 4 5
            1 2 3 4 5
*/

#include<stdio.h>
#include<conio.h>
 
int main()
{
    int r,c;

    for(r=1;r<=5;r++){
        for(c=1;c<=5;c++){
            printf("%d ",c);
        }
        printf("\n");
    }

 
    return 0;
}