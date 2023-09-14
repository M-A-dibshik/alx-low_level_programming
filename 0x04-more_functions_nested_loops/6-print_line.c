#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the _ charcter
 *	should be printed
*/

void print_line(int n)
{
	int lnchr;

	if (n <= O)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
		_putchar('\n');
	}
}
