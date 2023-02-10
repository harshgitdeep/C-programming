#include<stdio.h>
#include<conio.h>
 
int main()
{

    int ar[5],i;

    ar[0]=10;
    ar[1]=20;
    ar[2]=30;
    ar[3]=40;
    ar[4]=50;

    printf("Array elements \n");
    for(i=0;i<5;i++){
        printf("\n%d",ar[i]);
    }
    
    return 0;
}