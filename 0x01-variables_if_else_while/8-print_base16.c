#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 48;
	char c = 65;

	while (x <= 57)
	{
		putchar(x);
		x++;
	}
	while (c <= 70)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
