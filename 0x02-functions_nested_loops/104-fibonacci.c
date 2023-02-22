#include <stdio.h>

/**
 * numLength - returns the length of the number
 * @num: operand number
 * Return: number of digits
 *  *main - prints the first 98 Fibonacci sequences
 *  Return: 0
 */

int numLength(unsigned long num)
{
int length = 0;
if (num == 0)
{
 return (1);
}
 while (num != 0)
{
length++;
num /= 10;
}
return (length);
}
int main(void)
{unsigned long f1 = 1, f2 = 2, tmp, f1o = 0, f2o = 0, tmpo = 0;
unsigned long mx = 100000000;
int i, initial0s;
for (i = 1; i <= 98; i++)
{
if (f1o > 0)
{
 printf("%lu", f1o);
}
initial0s = numLength(mx) - 1 - numLength(f1);
while (f1o > 0 && initial0s > 0)
{
printf("%i", 0);
initial0s--;
}
printf("%lu", f1);

tmp = (f1 + f2) % mx;
tmpo = f1o + f2o + (f1 + f2) / mx;
f1 = f2;
f1o = f2o;
f2 = tmp;
f2o = tmpo;
if (i != 98)
{
printf(", ");
}
}
printf("\n");
return (0);
}
