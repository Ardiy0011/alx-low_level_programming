#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: represents the size of the memory
 * @c: the character to initialize the array with
 * Return: a pointer to the newly created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int a;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(c));


	else if (arr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		arr[i] = c;

	return (arr);
}
