/* pointers are deinged by using *pointer = &number
where this is the address where the value of number is saved.
pointer is itself a type and cannot be used with operators to add multiply etc. Always initialise a pointer ALWAYS!! even NULL.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Define an array to store the random numbers
    int numbers[100];

    // Generate and print 100 random integers along with their memory addresses
    printf("Generated numbers and their memory addresses:\n");
    for (int i = 0; i < 100; i++) {
        numbers[i] = rand() % 1000; // Generate random numbers between 0 and 999
        printf("%d\tAddress: %p\n", numbers[i], (void *)&numbers[i]);
    }

    return 0;
}