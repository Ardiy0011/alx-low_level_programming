#include <stdio.h>
/**
 * main - Prints the sum of all multiples of 3 or 5 up to 102
 * Return: 0
 */
int main(void)
{
int i;
int z = 0;

for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
z += i;
}
}

printf("%d\n", z);
return (0);
}
