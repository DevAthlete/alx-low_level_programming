#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number, evaluates its last digit, and
 * prints a message based on specified conditions.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, d;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (d > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	else if (d == 0)
		printf("Last digit of %d is %d and is 0\n", n, d);
	else if (d < 6 && d != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);

	return (0);
}
