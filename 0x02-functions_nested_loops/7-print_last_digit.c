#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: Last
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
{
last = (n % 10) * -1;
}
else
{
last = n % 10;
}
_putchar(last + '0');
return (last);
}
