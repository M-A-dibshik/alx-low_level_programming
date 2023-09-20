#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	/*find size of dest array*/
	while (dest[c])
		c++;

	/*src does not need be null*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
