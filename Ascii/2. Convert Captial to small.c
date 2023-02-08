#include<stdio.h>
#include<conio.h>

int main(){

    char var;
    
    printf("\n\n\nEnter any character\n");
    scanf("%c",&var);

    if(var>=65 && var<=90){
        printf("%c",(var+32));
    }
    else
    {
        printf("%c",(var-32));
    }
};