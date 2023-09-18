#include "main.h"

/**
 * Write a function that swaps the values of two integers
 *
 * Description: values of two integers
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
