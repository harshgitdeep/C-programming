/* 
                                            Switch case 

        syntax
            switch{
                case option:
                    // statement 
                      
            }
                case option:
                    // statement 
                      
            }
            default:
                    // statement 
                      
            }
*/

#include<stdio.h>
#include<conio.h>
 
int main()
{
    int var1=10;
    int var2=5;
    int res;
    char ch;

    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
 
    printf("\nEnter your choice\n");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':
        case 'a':
        case '1':
        case '+':
                res = var1 + var2;
                printf("Addition : %d ",res);
                break;
    
        case 'B':
        case 'b':
        case '2':
        case '-':
                res = var1 - var2;
                printf("Subtraction : %d ",res);
                break;
    
        case 'C':
        case 'c':
        case '3':
        case '*':
                res = var1 * var2;
                printf("Multiplication : %d ",res);
                break;
    
        case 'D':
        case 'd':
        case '4':
        case '/':
                res = var1 / var2;
                printf("Division : %d ",res);
                break;

        default:
            printf("\nInvalid");
    }
    return 0;
}

// Interview question
//Default can be place anywhere, even in between two cases



/*

                  FAN            LIGHT        AC          PROJECTOR           LAPTOP CHARGER

if                 X                X         ✔                X                       X

else if            X                X         ✔

switch                                        ✔   



switch case > elseif > if
*/
