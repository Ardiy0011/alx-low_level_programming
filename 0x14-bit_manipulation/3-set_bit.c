#include "main.h"

/**
 * set_bit - this func sets the value of a bit at a given index to 1.
 * @n: this is pointer to the bit.
 * @index: an index to set the value at - indices start at 0.
 * Return: return -1 for error check else 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (8 * sizeof(n)))
{
return (-1);
}
else
{
unsigned long int cover = 1ul << index;
n[0] |= cover;
return (1);
}
}
