#include "main.h"

/**
 * binary_to_uint - converting a  binary number to an unsigned int.
 * Return: returns b if b is to NULL or contains chararacter that
 * are neither 0 nor 1 else the converted no.
 * @b: pointer to a string to be traversed in the loop.
 */
unsigned int binary_to_uint(const char *b)
{
int result = 0;
int len = 0;

if (b == NULL)
{
return (0);
}

while (b[len] != '\0')
{
switch (b[len])
{
case '0':
result = result * 2 + 0;
break;
case '1':
result = result * 2 + 1;
break;
default:
return (0);
}
len++;
}

return (result);
}
