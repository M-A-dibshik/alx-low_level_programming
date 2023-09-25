#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area
 * @src: memory area
 * @n: function copies
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
