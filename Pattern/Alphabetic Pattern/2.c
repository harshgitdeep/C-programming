/*
A C E G I 
I G E C A
A C E G I
I G E C A
A C E G I 
*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int r;
    char c;
    for(r=1;r<=5;r++){
        if(r%2!=0){ 
            for(c=65;c<=73;c=c+2){
                printf("%c ",c);
            }}

        else{
                for(c=73;c>=65;c=c-2){
                printf("%c ",c);
            }
            
        }
        printf("\n");
    }

 
    return 0;
}