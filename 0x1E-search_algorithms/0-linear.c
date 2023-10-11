#include "search_algos.h"

/**
 * linear_search - finds value in an array with L/S
 * @array: pointer to input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always
 */
int linear_search(int *array, size_t size, int value)
{
	int val;

	if (!array)
		return (-1);

	for (val = 0; val < (int)size; val++)
	{
		printf("Value checked array[%u] = [%d]\n", val, array[val]);
		if (value == array[val])
			return (val);
	}
	return (-1);
}
