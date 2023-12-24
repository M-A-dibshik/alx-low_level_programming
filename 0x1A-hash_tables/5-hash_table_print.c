#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *elm;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i == 0; i < ht->size; i++)
	{
		elm = ht->array[i];
		while (elm != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", elm->key, elm->value);
			flag = 1;
			elm = elm->next;
		}
	}
	printf("}\n");
}
