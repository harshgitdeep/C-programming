#include<stdio.h>
#include<conio.h>
 
int main()
{
    int var1=10;
    int var2=5;
    int res;
    char ch;

    printf("Press A for Addition\n");
    printf("Press B for Subtraction\n");
    printf("Press C for Multiplication\n");
    printf("Press D for Division\n");
 
    printf("\nEnter your choice\n");
    scanf("%c",&ch);

            if(ch=="A")
            {
                res = var1 + var2;
                printf("\nAddition : %d", res);
            }
            else if(ch=="B")
            {
                res = var1 - var2;
                printf("\nSubstraction : %d", res);
            }
            else if(ch=="C")
            {
                res = var1 * var2;
                printf("\nMultiplication : %d", res);
            }
            else if(ch=="D")
            {
                res = var1  / var2;
                printf("\nDivision : %d", res);
            }
            else 
                {
                printf("\nWrong Choice");
                }

    return 0;}
