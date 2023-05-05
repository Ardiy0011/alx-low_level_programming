#include "main.h"

/**
 * get_bit - this func Gets the value of a bit at a given index.
 * @n: representing a bit.
 * @index: representing the index that contains the value
 * Return: 0 for success , 1 for fail and -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
int a;

if (index >= (8 * sizeof(n)))
return (-1);

switch ((n >> index) & 1)
{
case 0:
a = 0;
break;
case 1:
a = 1;
break;
default:

a = -1;
break;
}

return (a);
}
