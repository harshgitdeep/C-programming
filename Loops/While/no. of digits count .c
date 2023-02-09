#include<stdio.h>
#include<conio.h>
 
int main()
{
    int a,count=0;
    printf("Enter any digit \n");
    scanf("%d",&a);

    while(a>0){
        a=a/10;
        count++;
    }
    printf("\nNumber of digits = %d",count);
 
    return 0;
}