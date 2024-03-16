#include <stdio.h>
#include <stdlib.h>

int main()
{
    double w = 2;
    double h = 3.5;
    double perimeter = 0;
    double area = 0;
    
    perimeter = 2*(w + h);
    area = w * h;
    printf("area of rectangle is: %f\n", perimeter);
    printf("perimeter of rectangle is: %f\n", area);
    return 0;
    }