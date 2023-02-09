#include<stdio.h>
#include<conio.h>
 
int main()
{
    int i;
    int evencount=0;
    int evensum=0;
    int oddcount=0;
    int oddsum=0;

    for(i=1;i<=10;i++)
    {
       if(i%2==0){
        printf(" \neven %d",i);
        evencount++;
        evensum=evensum + i;
       }
       else{
         printf(" \nodd %d",i);
        oddcount++;
        oddsum=oddsum + i;

       }
    }
 
 printf("\nEven count = %d",evencount);
 printf("\nEven sum   = %d",evensum);
 printf("\n\n Odd count = %d",oddcount);
 printf("\nOdd sum   = %d",oddsum);
    return 0;
}