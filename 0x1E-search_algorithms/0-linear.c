#include "search.h"

/**
 * linear_search - Performs a linear search in an array of integers
 * @array: Pointer to the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the first occurrence of `value` in `array`, or -1
 * if `value` is not found or `array` is NULL.
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
