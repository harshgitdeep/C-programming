// Check palindrome or not
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int a,b,c=0,orgcopy;
    printf("Enter a number  = ");
    scanf("%d",&a);
    orgcopy=a;
    while(a>0){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }

    if(orgcopy==c){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    
    return 0;
}