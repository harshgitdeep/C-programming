#include<stdio.h>
#include<conio.h>
enum months{jan=1, feb, march, april, may, june, july, august, september, october, november , dec}; 

int main()
{
    // printing the values of months

    int i;
    for( i=jan;i<=dec; i++){
        printf("%d, ",i);
    }
 
    return 0;
}