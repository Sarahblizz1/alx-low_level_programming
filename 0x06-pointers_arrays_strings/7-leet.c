#include "main.h"

/**
 * leet - Encodes a script to 1337
 * @s: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char leet[] = {"oOlL22eEaA5566tT"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 16; j++)
			if (s[i] == leet[j])
				s[i] = j / 2 + '0';
	}

	return (s);
}
