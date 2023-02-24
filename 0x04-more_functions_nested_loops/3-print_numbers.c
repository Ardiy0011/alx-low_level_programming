#include "main.h"

/**
 * print_numbers - print  0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
char a;

for (a = 0; a <= 9; a++)
{
_putchar(a + '0');
}
_putchar('\n');
}
