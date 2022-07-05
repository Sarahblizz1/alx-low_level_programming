#include "main.h"
/**
 * print_alphabet - print the alphabets in lowercase
 *
 * Return: Always 0 (sucess)
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar (alpha);
	}
	_putchar('\n');

}
