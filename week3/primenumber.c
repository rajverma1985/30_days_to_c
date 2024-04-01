#include <stdio.h>
#include <stdlib.h>

/* challenge: create a program that will find all prime numbers from 3 - 1000
rules:
1. There has to be no input
2. ther out of each prime number should be seperated by space.
3. Store each prime number in an array.
4. Hard code the first 2 prime numbers i.e 2 and 3.
5. Use loops to only find prime numbers and a loop to print out the array of prime numbers.
*/


int main() {
    // pre condition for prime numbers: 0, 1 are not prime 2 is the smallest even prime number.
    int primeNumber[100] = {2, 3};
    int n, i;

    for (n = 5; n <= 100; n = n + 2) {
        int isPrime = 1; // Assume n is prime initially
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; // If n is divisible by any number other than 1 and itself, it's not prime
                break;
            }
        }
        if (isPrime) {
            printf("the prime number is %d\n", n);
        }
    }

    return 0;
}

