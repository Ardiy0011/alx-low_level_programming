#include "main.h"
/**
 * print_sign - Enter point
 * Description: prints the sign of a number
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar('0');
return (0);
}
