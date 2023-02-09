// Reverse a number without using a library function
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int a,b,c=0;
    printf("Enter a number  = ");
    scanf("%d",&a);

    while(a>0){
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    printf("Reversed number = %d",c);
    return 0;
}