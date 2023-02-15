/*
Print sum of every element of array using pointer*/

#include<stdio.h>
#include<conio.h>
 
int main()
{
    int arr[5],i,*ptr,sum=0;

    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    printf("\n\n----------------Pointer-----------------\n");
    for(i=0;i<5;i++){

        ptr=&arr[i];

        printf("\n Value   = %d ",*ptr);
        sum= sum + *ptr;
      
    }
     printf("\n\n Sum of array by using pointer   = %d ",sum);
 
    return 0;
}