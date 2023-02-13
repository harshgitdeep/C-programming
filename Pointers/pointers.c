/*
POINTER

1. Pointer is a referece type variable which hold the address of the another variable.
2. It will be declared with using the "&" symbol.

*/
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int a=10;
    int *ptr;
    printf("\nValue of variable a    : %d ",a);
    printf("\nAddress of vaiable a   : %d",&a);

    printf("\n\n-----------Pointer-----------");
    ptr= &a;
    printf("\n\nAddress of vaiable a hold bt pointer: %d",ptr);
    printf("\nValue of vaiable a hold bt pointer  : %d",*ptr);
 
    return 0;
}