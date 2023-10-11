#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @array: Pointer to the first element of the array
 * @left: Index of the left boundary
 * @right: Index of the right boundary
 * @value: Value to search for
 *
 * Return: Index of the found value or -1 if not found
 */
int binary_search(int *array, int left, int right, int value)
{
  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (array[mid] == value)
      return (mid);
    if (array[mid] < value)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return (-1);
}

/**
 * exponential_search - Exponential search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index of the found value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
  int i = 1;

  if (!array || size <= 0)
    return (-1);

  if (array[0] == value)
    return (0);

  while (i < size && array[i] <= value)
    i *= 2;

  int left = i / 2;
  int right = (i < size) ? i : size - 1;

  return (binary_search(array, left, right, value));
}
