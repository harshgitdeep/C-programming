#include<stdio.h>
#include<conio.h>
 
enum weekdays{Sunday=1, Monday, Tuesday, Wednesday , Thursday, Friday, Saturday};

int main()
{
    enum weekdays w; // variable declaration of weekdays type
    w=Monday; //assigining value of Monday to w.
    printf("The value of w is %d",w);
 
    return 0;
}