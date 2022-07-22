#include "main.h"

/**
 * _strcat - concatenates the string pointed by @src
 * to the end of the string pointed by @dest
 * @dest: a pointer to the string to be concatenated upon
 * @src: the source string to be appended to
 * Return: a pointer to destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
