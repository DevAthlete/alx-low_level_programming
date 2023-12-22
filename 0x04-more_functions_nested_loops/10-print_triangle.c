#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar ('\n');
	else
	{
		int w, x;

		for (w = 1; w <= size; w++)
		{
			for (x = 1; x <= size; x++)
			{
				if ((w + x) <= size)
					_putchar (' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		}
	}
}
