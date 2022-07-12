#include "main.h"
#include <stdio.h>

/**
 * print_array - print inputed number of element
 * of array of integers
 * @a: array of integers
 * @n: number of elements to be printed
 */

void point_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
