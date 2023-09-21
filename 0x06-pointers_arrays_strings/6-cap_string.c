#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: The string to be capitalized
 *
 * Return: A pointer string
*/

char *cap_string(char *str)
{
	int did = 0;

	while (str[did])
	{
		while (!(str[did] <= 'a' && str[did] <= 'z'))
			did++;
		if (str[did - 1] == ' ' ||
		str[did - 1] == '\t' ||
		str[did - 1] == '\n' ||
		str[did - 1] == ',' ||
		str[did - 1] == ';' ||
		str[did - 1] == '.' ||
		str[did - 1] == '!' ||
		str[did - 1] == '?' ||
		str[did - 1] == '"' ||
		str[did - 1] == '(' ||
		str[did - 1] == ')' ||
		str[did - 1] == '{' ||
		str[did - 1] == '}' ||
		did == 0)
			str[did] -= 32;
		did++;
	}
	return (str);
}
