/*
----1
---21
--321
-4321
54321

----5
---45
--345
-2345
12345

----9
---77
--555
-3333
11111

54321
-4321
--321
---21
----1

97531
-9753
--975
---97
----9

ABCDE
A---E
A---E
A---E
ABCDE
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