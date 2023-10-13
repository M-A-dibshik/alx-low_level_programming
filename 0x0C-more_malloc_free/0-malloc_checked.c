#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocares memory using malloc and exit
 *		if failed
 * @b: int
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
