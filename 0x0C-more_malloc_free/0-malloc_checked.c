#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * Description: a function that allocates memory using malloc.
 * @b: an unsigned integer
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
char *ptr = malloc(b * sizeof(char));
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
