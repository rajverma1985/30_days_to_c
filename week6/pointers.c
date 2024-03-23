/* pointers are deinged by using *pointer = &number
where this is the address where the value of number is saved.
pointer is itself a type and cannot be used with operators to add multiply etc. Always initialise a pointer ALWAYS!! even NULL.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int num = 150;
    int *pNum = NULL;
    // pNum = &num;
    printf("Address of num is: %p\n", &num );
    printf("Address of pNum is: %p\n", &pNum );
    printf("Value of pNum is: %p\n", pNum );
    printf("Value of what pNum is pointing to: %d\n", *pNum);
    return 0;
}