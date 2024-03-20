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


// initializing an array with initial values, one of the reasons is to detect when there is something wrong:
// int counter[5] = {1,2,45,3,12} setting to some random loved values
// int counter[5] = {0,0,0,0,0}   settings all initial values to zero.
// int counter[50] = {1,2,3,5}   This will set the rest of the 46 values to zero.
// IMP designated initalizors
// 