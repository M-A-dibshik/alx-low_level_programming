#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: string
 *
 * Return: 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
		if (*haystack == needle[i])
		return (haystack);
		}
	haystack++;
	}
	return ('\0');
}
