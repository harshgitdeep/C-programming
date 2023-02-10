#include<stdio.h>
#include<conio.h>
 
int main()
{
    int var1=10;
    int var2=5;
    int res,ch;

//  printf("Enter the first no. = ");
//  scanf("%d",&var1);
 
//  printf("Enter the second no. = ");
//  scanf("%d",&var2);

    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
 
    printf("\nEnter your choice\n");
    scanf("%d",&ch);

    if(ch==1)
    {
        res = var1 + var2;
        printf("\nAddition : %d", res);
    }
    if(ch==2)
    {
        res = var1 - var2;
        printf("\nSubstraction : %d", res);
    }
    if(ch==3)
    {
        res = var1 * var2;
        printf("\nMultiplication : %d", res);
    }
    if(ch==4)
    {
        res = var1  / var2;
        printf("\nDivision : %d", res);
    }

    if(ch>4 || ch<1)
    {
        printf("\nWrong Choice");
    }

    return 0;
}