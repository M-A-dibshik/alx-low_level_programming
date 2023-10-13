#include "main.h"

/**
 * malloc_checked - allocares memory using malloc
 * @b: int
 * Return: pointer to the allocated memory
*/

int *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
