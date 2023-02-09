/*
input ---> 4
output --> 4444

input ---> 7
output --> 7777777

*/
#include<stdio.h>
#include<conio.h>
 
int main()
{   
    int i,num;
    printf("Enter a number = ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {                                               
        printf("%d",num);                  
    }
 
    return 0;
}