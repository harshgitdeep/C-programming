/*
electricity bill 

upto 200 - rs 3.00
201 - 4.00
401 - rs 5.50

surcharge 15% if unit consumes>300 units

*/

/**
 * C program to calculate total electricity bill
 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int unit;
    float amt, total_amt, sur_charge;


    printf("Enter total units consumed: ");
    scanf("%d", &unit);


    if(unit <= 0)
    {
         amt=150 ;
    }
    else if(unit <= 200)
    {
        amt =  unit * 3;
    }
    else if(unit >= 201)
    {
        amt =  unit * 4;
    }

    else if(unit >= 401)
    {
        amt = unit * 5.50;
    }
    else
    {
        amt = 220 + ((unit-250) * 1.50);
    }

  /*
    if(unit>300){
        sur_charge = amt * 0.15;
        total_amt  = amt + sur_charge;
        
    }
    else{
        total_amt  = amt ;
    }*/
    

    printf("Electricity Bill = Rs. %.2f", total_amt);

    return 0;
}