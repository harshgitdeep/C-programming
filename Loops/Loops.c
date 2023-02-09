/*
                    loops

         for        while      do while

---------------------------------------------------------
                    INTERVIEW QUESTION 

ques1. Logical diffrence between for and while
Ans.   for ---> finite no of procceses

       while --> used for finite or infinite proccesses

       do while --> mandatory 1 output either condition is true or false
-------------------------------------------------------------------

Process for a loop

steps --->
1. Initialization
2. Condition
3. Incrementatio/ decrementation ++/--

----------

SYNTAX 

For Loop ---> 
                     Step 1           Step 2     Step 4
                for(initialization; condition;   ++/--){            if ++ ---> < 

                    step3 Statement
                }

                Exit



*/

#include<stdio.h>
#include<conio.h>
 
int main(){ 

int i,start,last;

    printf("Enter the start position = ");
    scanf("%d",&start);
    printf("Enter the last position = ");
    scanf("%d",&last);

    for(i=start;i<=last;i++);
    {                                               
        printf("\nChitkara %d",i);                  
    }

    return 0;
}