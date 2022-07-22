#include "main.h"

/**
 * _strlen - Return the lenght of a string
 * @str: string
 *
 * Return: Lenght
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}
