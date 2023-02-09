

#include<stdio.h>
#include<conio.h>
 
int main()
{

    char ch;

   
 
    printf("\nEnter an alphabet = ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':

                printf("Vowel");
                break;

        default:
            printf("\nConsonant");
    }
    return 0;
}




