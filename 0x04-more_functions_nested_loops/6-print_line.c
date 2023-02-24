#include "main.h"

/**
 * print_line - prints a line
 * @n: variable
 *
 * Return: 0
 */

void print_line(int n)
{
int a;

for (a = 0; a < n && n > 0; a++)
{
_putchar('_');
}
_putchar('\n');
}
