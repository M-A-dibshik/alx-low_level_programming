#include <stdio.h>

/**
 * main - print number of arguments passed into it
 * @argc: the number
 * @argv: pointer to an array
 * Return: 0 (success)
*/

int main(int argc, char *argv[], __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
