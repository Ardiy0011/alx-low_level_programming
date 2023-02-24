#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: 0
 */

int main(void)
{
long num = 612852475143;
long divisor = 2;
long large_prime_num = 0;

while (num != 1)
{
if (num % divisor == 0)
{
num = num / divisor;
large_prime_num = divisor;
}
divisor += 1;
}
printf("%ld\n", large_prime_num);
return (0);
}
