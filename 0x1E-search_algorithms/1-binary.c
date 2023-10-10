#include "search.h"

/**
 * recursive_search - finds val using r/s
 * @array: pointer to input array
 * @size: size of the array
 * @value: value to search in
 * Return: the index of the found value
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t val;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");

	for (val = 0; val < size; val++)
		printf("%s %d", (val == 0) ? ":" : ",", array[val]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: pointer to input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the value found
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
