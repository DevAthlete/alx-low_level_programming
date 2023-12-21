#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int r, n, c;

	for (r = 0; r <= 10; r++)
	{
	for (n = 0; n <= 14; n++)
	{
		c = n;
		if (n > 9)
		{
			_putchar(1 + 48);
			c = n % 10;
		}
		_putchar(c + 48);
	}
	_putchar('\n');
	}
}
