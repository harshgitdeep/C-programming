/*

1
AB
123
ABCD
12345
*/

#include<stdio.h>
#include<conio.h>
 
int main()
{
    int c,r;
    char ch='A';
for(r=1;r<=5;r++){
        
        if(r%2!=0){
        for(c=1;c<=r;c++){
            printf("%d",c);
        }}
        else{
            for(ch=65;ch<=r+64;ch++){
            printf("%c",ch);
        }
        }
        printf("\n");
    }
 
    return 0;
}



/*

*/
