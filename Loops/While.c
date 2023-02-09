// Formats using while loop 
#include<stdio.h>
#include<conio.h>
 
int main()
{
    int i,start,last,count=0;
    printf("Enter start postion\n");
    scanf("%d",&start);
    printf("Enter last postion\n");
    scanf("%d",&last);

    i=start;
    while(i<=last)
        {
            printf("\n Hello %d",i);
            i++;
            count++;
        }
 printf("\n\n Times %d",count);
    return 0;
}