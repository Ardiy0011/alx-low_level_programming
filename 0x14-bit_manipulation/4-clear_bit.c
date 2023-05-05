#include "main.h"

/**
 * clear_bit - this func Sets the value of a bit at a given index to 0.
 * @n: pointer to the bit.
 * @index: an index to set the val at indices start at 0.
 * Return: return -1 for error check else 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
int a;
int b;

div_t compute = div(index, (int) sizeof(n) * 8);
a = compute.quot;
b = compute.rem;

if (a != 0 || b >= (int) sizeof(n) * 8)
{
return (-1);
}

*n &= ~(1UL << b);

return (1);
}
