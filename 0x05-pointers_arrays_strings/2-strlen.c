#include "main.h"
#include <stddef.h>

/**
 * _strlen - Return the lenght of a string
 * @str: string
 *
 * Return: Lenght
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
