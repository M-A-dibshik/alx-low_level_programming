#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print a dog
 * @d: the dog to print
 *
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		print("Name: %s\n", d->name ? d->name : "(nil)");
		print("Age: %f\n", d->age);
		print("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
