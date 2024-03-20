#include <stdio.h>
#include <stdlib.h>

// here we define a test array and array can only be of single types you cannot mix them up.

int main(int argc, char const *argv[])
{
	/* creating an array of 10 values */
	int tarry[10];
	int i; // this is an integer which we will take as an input from the user.
	int count = 10;  // total values anyone can pass
	long total = 0;  //sum of all the values

	printf("Enter the numbers to add\n");
	for (i=0; i<count; ++i)
		{
			printf("%u>", i+1); // here we print he number in the format of s.no and then the number e.g.  1>-1, 2>-245
			scanf("%d", &tarry[i]);
			total += tarry[i];
			printf("the value stored is: %d\n", tarry[i]);
		};
	printf("The total is: %ld:\n", total);
	return 0;
}