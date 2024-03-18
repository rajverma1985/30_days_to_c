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
#define BASIC_PAY_RATE 12.00    // $ per hour
#define OVERTIME_RATE 40    // time and a half
#define TAX_300 .15
#define TAXN_150 .20
#define TAXN .25

int main()
{
    int hours;
    double grossPay, taxes, netPay, overTime;

    printf("Please enter the number of hours worked this week: ");
    scanf("%d", &hours);

    if (hours<=40)
        grossPay = hours * BASIC_PAY_RATE;
    else
    {
        grossPay = 40 * BASIC_PAY_RATE;
        overTime = (hours - 40) * (BASIC_PAY_RATE * 1.5);
        grossPay += overTime;
    }

    if (grossPay <=300)
    {
        taxes = grossPay * TAX_300;
    }
    else if (grossPay >300 && grossPay<=450)
    {
        taxes = 300 * TAX_300;
        taxes += (grossPay - 300) * TAXN_150;
    }
    else
    {
        taxes = 300 * TAX_300;
        taxes += 150 * TAXN_150;
        taxes += (grossPay - 450)*TAXN;
    }
    
    netPay = grossPay - taxes;
    printf("Your gross pay is : %f\n", grossPay);
    printf("you net pay is: %f\n", netPay);
    printf("Your total taxes are %f:", taxes);
    return 0;
}
