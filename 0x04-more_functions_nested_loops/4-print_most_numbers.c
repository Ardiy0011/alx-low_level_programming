#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 and skips 2, 3
 * Description: prints
 * Return: void
 */

void print_most_numbers(void)
{
char a;

for (a = 0; a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
else
{
_putchar(a + '0');
}
}
_putchar('\n');
}
