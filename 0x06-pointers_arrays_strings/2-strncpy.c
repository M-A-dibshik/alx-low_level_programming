#include "main.h"

/**
 * _strncat - unction that copies a string
 *
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
