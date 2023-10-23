#include "lists.h"

/**
 * sum_listint - calculates sum of all the data
 * @head: first node in the linked list
 * Return: sum of all the data (n) of a listint_t
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i = head;

	while (i)
	{
		sum += i->n;
		i = i->next;
	}

	return (sum);
}
