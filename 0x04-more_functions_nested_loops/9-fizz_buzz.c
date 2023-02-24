#include <stdio.h>
/**
 * main - Fizz Buzz code
 * Description: prints
 * Return: void
 */
int main(void)
{
int a;

for (a = 1; a <= 100; a++)
{
if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz\n");
}
else if (a % 3 == 0)
{
printf("Fizz\n");
}
else if (a % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", a);
}
}
return (0);
}
