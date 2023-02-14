#include<stdio.h>
#include<conio.h>
 
int main()
{
    int arr[5],i,*ptr;

    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    printf("\n----------------Array-----------------\n");
    for(i=0;i<5;i++){
        printf("\n Value   = %d ",arr[i]);
        printf("\t Address = %d ",&arr[i]);
    }

    printf("\n\n----------------Pointer-----------------\n");
    for(i=0;i<5;i++){

        ptr=&arr[i];

        printf("\n Value   = %d ",*ptr);
        printf("\t Address = %d ",ptr);
    }
 
    return 0;
}