#include "main.h"

/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 * Return: void
 */

void print_square(int n)
{
int i, ii;

for (i = 0; i < n && n > 0; i++)
{
for (ii = 0; ii < n; ii++)
{
_putchar('#');
}
_putchar('\n');
}
if (i == 0)
{
_putchar('\n');
}
}
