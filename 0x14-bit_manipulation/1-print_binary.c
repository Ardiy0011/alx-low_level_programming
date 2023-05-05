#include "main.h"

/**
 * print_binary - converting binary to its associated number.
 * @n: represnets the the number to be converted.
 */
void print_binary(unsigned long int n)
{
int moveright = sizeof(n) * 8 - 1;
int start = 1;

if (n == 0)
{
_putchar('0');
return;
}

while (moveright >= 0)
{
switch ((n >> moveright) & 1)
{
case 1:
start = 0;
_putchar('1');
break;
case 0:
if (!start)
_putchar('0');
break;
}

moveright--;
}
}
