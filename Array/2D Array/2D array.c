// Two dimensional array

#include <stdio.h>

int main(){
    int r,c,row,col;

   printf("\nEnter no. of rows = ");
   scanf("%d",&row);
   printf("\nEnter no. of cols = ");
   scanf("%d",&col);

   int arr[row][col];

   printf("\nEnter elements in 2d array = ");

    for(r=0;r<row;r++){
        for(int c=0;c<col;c++){
            scanf("%d",&arr[r][c]);
            }
        }
  
  printf("\n------------- 2D ARRAY ---------");

    for(r=0;r<row;r++){
        for(int c=0;c<col;c++){
            printf("\n %d ",arr[row][col]);
            }
            printf("\n");
        }

}