#include <stdio.h>

/**
 * main - Entry point
 *
 * Result: Always 0 (success)
 */

int main(void)
{
	char a;

	for (a = "z"; a >= "a"; a--)
		putchar (a);

	putchar('\n');
	return (0);
}

