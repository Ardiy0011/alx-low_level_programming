#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */
void times_table(void)
{
int row, column;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
int product = row * column;
if (column > 0)
{
_putchar(',');
_putchar(' ');
}
if (product < 10)
{
_putchar(' ');
}
else
{
_putchar(product / 10 + '0');
}
_putchar(product % 10 + '0');
}
_putchar('\n');
}
}
