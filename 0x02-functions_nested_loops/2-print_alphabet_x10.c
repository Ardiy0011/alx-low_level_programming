#include "main.h"
/**
 * print_alphabet_x10 - Enter point
 * Description: a function that prints alphabet10x
 */
void print_alphabet_x10(void)
{
char c = 'a';
int i = 0;
while (i < 10)
{
_putchar(c);
c++;

if (c > 'z')
{
_putchar('\n');
c = 'a';
i++;
}
}
}
