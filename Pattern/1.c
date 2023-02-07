/*
1 2 3 4 5 
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int r,c;
   
    for(r=1;r<=5;r++){
        if(r%2!=0){ 
            for(c=1;c<=5;c++){
                printf("%d ",c);
            }}

        else{
                for(c=5;c>=1;c--){
                printf("%d ",c);
            }
            
        }
        printf("\n");
    }

 
    return 0;
}