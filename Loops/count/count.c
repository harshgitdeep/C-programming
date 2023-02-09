#include<stdio.h>
#include<conio.h>
 
int main()
{
    int i;
    int count=0;
    for(i=1;i<=1000;i=i+7){
       count=count+1;
    }
     printf("\n\ncount = %d",count);
 
    return 0;
}