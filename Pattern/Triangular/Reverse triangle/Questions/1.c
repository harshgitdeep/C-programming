/*
----1
---21
--321
-4321
54321

*/

#include<stdio.h>
#include<conio.h>
 
int main()
{
    int z=4,r,c,s;
    for(r=1;r<=5;r++){
        for(s=1;s<=z;s++){
            printf("-");
            
        }
        z--;
        for(c=r;c>=1;c--){
            printf("%d",c);
        }
        printf("\n");
    }

 
    return 0;
}