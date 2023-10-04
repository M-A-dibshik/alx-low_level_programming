#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *       which contains a copy of the string given as a parameter
 *
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	char *j;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	j = malloc(sizeof(char) * (i + 1));

	if (j == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		j[r] = str[r];

	return (i);
}
