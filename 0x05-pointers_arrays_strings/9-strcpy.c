#include "main.h"

/**
 * _strcpy - xopies a string pointed to by @src, a terminating null byte which
 * is pointed by @dest
 * @dest: a buffer to copy string to
 * @src: a source string to copy
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';

	return (dest);
}
