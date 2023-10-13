#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: array of integers
 * Return: array of integers
*/

int *array_range(int min, int max)
{
	int len, j;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + j;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (j = 0; j < len; j++)
		ptr[j] = min++;
	return (ptr);
}
