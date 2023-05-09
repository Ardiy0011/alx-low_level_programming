#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
int i, ii;

for (i = 0; i < n && n > 0; i++)
{
for (ii = 0; ii < i; ii++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
if (i == 0)
{
_putchar('\n');
}
}
