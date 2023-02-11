/*
Reverse every element of array 

Input  : 341 926 82 786 15
Output : 143 629 28 687 51    */

#include <stdio.h>

int main(){
    int n;
    int cr[100];
    int c;
    int b;

    printf("Enter the size of array = ");
    scanf("%d",&n);

    int ar[n];

   printf("\nEnter %d array elements = ",n);
    for(int i = 0;i <n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i = 0;i<n;i++){
        c = 0;
        while(ar[i]>0){
            b = ar[i] %10;
            c = c*10 +b;
            ar[i] = ar[i]/10;

        }
        cr[i] = c;
    }

    printf("The new reversed array = ");
    for(int i = 0;i<n;i++){
       printf("%d ",cr[i]);
    }
}