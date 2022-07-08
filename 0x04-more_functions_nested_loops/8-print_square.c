#include "main.h"

/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 * Return: void
 */

void print_square(int n)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

