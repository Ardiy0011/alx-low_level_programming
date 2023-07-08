#include "hash_tables.h"
#include "linked.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	printf("\nHash Table\n-------------------\n");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			printf("Index: %lu, Key: %s, Value: %s\n", i, ht->array[i]->key, ht->array[i]->value);
		}
	}

	printf("-------------------\n\n");
}
