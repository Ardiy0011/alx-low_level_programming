#include "hash_tables.h"
#include "linked.h"

/**
 * hash_table_print - Prints the key-value pairs in the hash table.
 * @ht: Pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int count = 0;
int printed = 0;

printf("{");

for (i = 0; i < ht->size; i++)
{
while (ht->array[i] != NULL)
{
if (count > 0 && printed > 0)
printf(", ");
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
ht->array[i] = ht->array[i]->next;
count++;
printed++;
}
}

printf("}\n");
}


