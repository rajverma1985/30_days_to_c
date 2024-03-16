//bitwise operators
// IMP to be covered in more detail later.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 60;  //0011 1100
    unsigned int b = 13;  //0000 1101
    int andresult = 0;
    int orresult = 0;
    
    andresult = a & b;
    orresult = a | b;
    printf("result is %d", andresult);
    printf("result is %d", orresult);
    return 0;
    }