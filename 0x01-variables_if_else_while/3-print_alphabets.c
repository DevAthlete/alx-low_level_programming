#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints lowercase alphabets from 'a' to 'z'
 * as well as 'A' to 'Z'
 * using a while loop and putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';
	char A = 'A';

	/*prints a to z*/
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	/*prints A to Z*/
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
