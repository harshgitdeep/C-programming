/*
Linear search   */

#include <stdio.h>

int main(){
    int n,x,count=0;

    printf("Enter the size of array = ");
    scanf("%d",&n);

    int ar[n];

   printf("\nEnter %d array elements = ",n);
    for(int i = 0;i <n;i++){
        scanf("%d",&ar[i]);
    }

    printf("\nEnter element to search = ");
    scanf("%d",&x);

    for(int i = 0;i<n;i++){
            if(ar[i]==x){
                count ++;
                break;
            }
        }

        if(count>0){
            printf("Found");
        }

        else{
            printf("Not found");
        }

    

   
}