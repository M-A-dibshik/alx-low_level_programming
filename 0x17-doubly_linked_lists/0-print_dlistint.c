#include "lists.h"
/**
 * print_dlistint - prints all elements
 * @h: address of head node
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}

	return (a);
}
