#include <stdio.h>
/**
 * linear_search - runs linear search in an array of vals
 * @array: pointer to the array
 * @size: first value in the array
 * @value: the value
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
	return (-1);

	}
	size_t i;

	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);

	if (array[i] == value)
	{
		return (i);
	}
	}

	return (-1);
}

