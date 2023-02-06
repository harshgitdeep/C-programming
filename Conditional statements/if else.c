#include<stdio.h>
#include<conio.h>

int main(){

    int age;
    printf("Enter your age = ");
    scanf("%d",&age);

    if(age>=18){
        printf("Eligible for voting");
    }
    else{
        printf("Sorry! You are underage");
    }
    
    return 0;
}