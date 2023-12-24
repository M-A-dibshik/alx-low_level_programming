#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieves value
 * @key: key to find value
 * Return: value associated with element, or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *elm;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	elm = ht->array[index];
	while (elm != NULL)
	{
		if (strcmp(elm->key, key) == 0)
			return (elm->value);
		elm = elm->next;
	}
	return (NULL);
}
