#include "hash_tables.h"
#include "linked.h"

char *hash_table_get(const hash_table_t *ht, const char *key);

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Alice");
    hash_table_set(ht, "N", "printf");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "is fun");
    hash_table_set(ht, "javascript", "web");

    value = hash_table_get(ht, "python");
    printf("Value for key 'python': %s\n", value);

    value = hash_table_get(ht, "Bob");
    printf("Value for key 'Bob': %s\n", value);

    value = hash_table_get(ht, "N");
    printf("Value for key 'N': %s\n", value);

    value = hash_table_get(ht, "Asterix");
    printf("Value for key 'Asterix': %s\n", value);

    value = hash_table_get(ht, "Betty");
    printf("Value for key 'Betty': %s\n", value);

    value = hash_table_get(ht, "98");
    printf("Value for key '98': %s\n", value);

    value = hash_table_get(ht, "c");
    printf("Value for key 'c': %s\n", value);

    value = hash_table_get(ht, "javascript");
    printf("Value for key 'javascript': %s\n", value);

    return (EXIT_SUCCESS);
}
