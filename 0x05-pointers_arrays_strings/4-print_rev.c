#include "main.h"

/**
 * print_rev - prints reversed string
 * @s: pointer to the string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
