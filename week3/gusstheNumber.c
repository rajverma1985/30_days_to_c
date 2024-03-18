/* Guess a number.
Rules: 
1. You can only enter numbers from 0 to 20
2. Ask user to guess the number.
3. Total chances to enter is 5.
4. Programs tells if its too high or low and how many tries left to guess.
5. Congrats when guessed right.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int guessNumber, numTries=0, randomnumber;
	time_t t;
	srand((unsigned) time(&t));
	randomnumber = rand() % 21;

	// ask for the input here:
	printf("Welcome to guess the number, please enter the number between 1 and 20:\n");
	printf("You have 5 tries to guess the right number, good luck and god speed!\n");
	// start the loop here till we reach number of tries to 5

	do 
	{
		printf("Enter your guess:\n");
		scanf("%d", &guessNumber);
		if (guessNumber > 20)
		printf("What are you doing Enter something between 1 and 20\n");
		else
		{
		numTries++;
		if (guessNumber < randomnumber)
			printf("Too Low, try again! %d tries left\n", (5 - numTries));
		else if (guessNumber > randomnumber)
		{
			printf("Too High, try again! %d tries left\n", (5 - numTries));
		}
		else{

			printf("Congratulations, you guessed it right!");
			break;
		}
		if (numTries == 5)
		{
			printf("You have reached the number of tries, GAME OVER!");
			break;

		}
		}
	}
	while (1);

	return 0;
}