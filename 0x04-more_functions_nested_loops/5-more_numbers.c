#include "main.h"

/**
 * print_numbers - print  0 - 9
 * skip 2 and 4
 * Return: void
 */

void more_numbers(void)
{
char a;

for (int i = 1; i <= 3; i++)
{

for (a = 0; a <= 14; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
}
