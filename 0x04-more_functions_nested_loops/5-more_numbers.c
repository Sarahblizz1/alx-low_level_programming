#include "main.h"

/**
 * more_numbers - prints more numbers from 0 - 14
 * Return: void
 */

void more_numbers(void)
{
	int i, ro;

	for (ro = 0; ro < 10; ro++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
