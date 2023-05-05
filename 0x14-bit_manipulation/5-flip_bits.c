#include "main.h"

/**
 * flip_bits - this func Returns the number ofnum_to_flip to flip
 * one number to another.
 * @n:  first number.
 * @m:  second number.
 * Return: this returns value required to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int content = n ^ m;
unsigned long int start = 0;
unsigned int num_to_flip = 0;

while (content > 0)
{
switch (content & 1)
{
case 1:
start++;
break;
default:
break;
}
content >>= 1;
}
num_to_flip = start;
return (num_to_flip);
}
