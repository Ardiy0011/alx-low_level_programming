#include "main.h"

/**
 * _puts - prints a string and a new line
 * @s: pointer to a string to print
 *
 * Return: 0
 */

void _puts(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
