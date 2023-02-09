#include<stdio.h>
#include<conio.h>
 
int main()
{
    int var1,var2,sum=0,ch;

    do{
        printf("Enter I value \n");
        scanf("%d",&var1);

        printf("Enter II value\n");
        scanf("%d",&var2);

        sum=var1 + var2;

        printf("\nSum : %d",sum);

        printf("\nDo you wanna continue... press(y/n)\n");
        fflush(stdin);
        scanf("%c",&ch);
    }
    while(ch=='y' || ch=='n');

    return 0;
}
