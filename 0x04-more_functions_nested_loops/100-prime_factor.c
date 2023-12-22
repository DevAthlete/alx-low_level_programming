#include <stdio.h>

/**
 * ihatemath - Finds the largest prime factor of a given number.
 * @n: The number for which to find the largest prime factor.
 *
 * Return: The largest prime factor.
 */
long ihatemath(long n)
{
	long i, max;

	while (n % 2 == 0)
	{
		n /= 2;
		max = 2;
	}

	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			max = i;
		}
	}

	return (max);
}

/**
 * main - Prints the largest prime factor of a specific number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long mia = ihatemath(num);

	printf("The largest prime factor of %ld is: %ld\n", num, mia);
	printf("\n");

	return (0);
}
