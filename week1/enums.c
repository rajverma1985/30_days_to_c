#include <stdio.h>
#include <stdlib.h>

int main()
    {
    enum Company { A, B, C, D };
    enum Company a=A;
    enum Company b=B;
    
    printf("company value for a is: %d\n", a);
    printf("company value for b is: %d\n" , b);
    return 0;
    }