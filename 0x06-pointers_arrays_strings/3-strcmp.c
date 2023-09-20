#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: input value
 * @s2: input value
 * Return: 1 if true, 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 49) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}