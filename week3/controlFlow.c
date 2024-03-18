/* challenge:
Calculate the amount of pay per week for the below conditions:
1. ask user for the amount of hours worked per week.
2. Outputs should include gross pay, taxes and net pay.
3. assumptions:
    a. basic pay rate = 12$/per hours
    b. Overtime (over and above 40 hours) = time and a half.
    c. Tax card:
        i. 15% on first 300$
        ii. 20% on next 150$
        iii. 25% on the rest
*/
#include <stdio.h>
#include <stdlib.h>

// defining Constants for the calculations
#define BASIC_PAY_RATE 12    // $ per hour
#define OVERTIME_RATE 1.5    // time and a half
#define TAX_300 .15
#define TAXN_150 .20
#define TAXN .25

int main()
{
    // variables defined here
    int hours_worked;
    double gross_pay; 
    double net_pay;
    double taxes;

    printf("Enter the hours worked: \n");
    scanf("%d", &hours_worked);
    
    //calculate the gross pay

    if (hours_worked <= 40)
    {
        gross_pay = hours_worked * BASIC_PAY_RATE;
    }
    else
    {   
        double overtime = (hours_worked - 40) * BASIC_PAY_RATE;
        gross_pay = (40 * BASIC_PAY_RATE) + overtime;
    }
    
    // calculate taxes
    if (gross_pay<=300)
    {
        taxes = gross_pay * TAX_300;
    }
    else if (gross_pay > 300 && gross_pay <= 450)
    {
        taxes = gross_pay * 300;
        taxes += (gross_pay - 300) * TAXN_150;
        
    }
    else
    {
        taxes = gross_pay * 300;
        taxes += (gross_pay - 300) * TAXN_150;
        taxes += (gross_pay - 450) * TAXN;
    }

    net_pay = gross_pay - taxes;

    printf("Your gross pay is: %d\n", gross_pay);
    printf("Your taxes for the week are: %d\n", taxes);
    printf("Your net pay for the week is: %d\n", net_pay);

    return 0;
}