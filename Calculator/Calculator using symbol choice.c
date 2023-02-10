#include<stdio.h>
#include<conio.h>
 
int main()
{
    int var1=10;
    int var2=5;
    int res;
    char ch;

    printf("Press A,a or + for Addition\n");
    printf("Press B,b or - for Subtraction\n");
    printf("Press C,c or * for Multiplication\n");
    printf("Press D,d or / for Division\n");
 
    printf("\nEnter your choice\n");
    scanf("%c",&ch);

            if(ch=='A' || ch=='a' || ch=='+')
            {
                res = var1 + var2;
                printf("\nAddition : %d", res);
            }
            else if(ch=='B' || ch=='b' || ch=='-')
            {
                res = var1 - var2;
                printf("\nSubstraction : %d", res);
            }
            else if(ch=='C' || ch=='c' || ch=='*')
            {
                res = var1 * var2;
                printf("\nMultiplication : %d", res);
            }
            else if(ch=='D' || ch=='d' || ch=='/')
            {
                res = var1  / var2;
                printf("\nDivision : %d", res);
            }
            else 
                {
                printf("\nWrong Choice");
                }

    return 0;}
