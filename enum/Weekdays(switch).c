#include<stdio.h>
#include<conio.h>
 
enum weekdays{Sunday=1, Monday, Tuesday, Wednesday , Thursday, Friday, Saturday};

int main()
{
    enum weekdays d;
    d=Wednesday; 
    switch(d){
        case Sunday:
            printf("Today is sunday");
            break;
        case Tuesday:
            printf("Today is Tuesday");
            break;
        case Wednesday:
            printf("Today is Wednesday");
            break;
        case Thursday:
            printf("Today is Thursday");
            break;
        case Friday:
            printf("Today is Friday");
            break;
        case Saturday:
            printf("Today is Saturday");
            break;
    }
    
    return 0;
}