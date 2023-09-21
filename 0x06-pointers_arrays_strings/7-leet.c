#include "main.h"
#include <stdio.h>

/**
 * leet - change vowels to numbers
 *
 * @s: analized string
 *
 * Return: string with all changed
*/

char *leet(char *s)
{
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j <= 9; i++)
		{
			if (*(s + i) == a[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
