#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)//prototype
{
if (c >= 65 && c <= 90)//if c is above the ascii alotment for lowercase alphabets
return (1);
else
return (0);
}
