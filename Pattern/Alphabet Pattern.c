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
    int r;
    char c;
    for(r=1;r<=5;r++){
        for(c=65;c<=69;c++){
            printf("%c ",c);
        }
        printf("\n");
    }

 
    return 0;
}