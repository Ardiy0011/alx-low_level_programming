#include <stdio.h>
/**
 * infinite_add - a functuion tha adds 2 numbers together while reversing it
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer to store the result
 * @size_r: size of the buffer
 * Return: a pointer to result or NULL
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, i = 0, j = 0, sum = 0, carry = 0;
char temp;
while (*(n1 + len1) != '\0')
len1++;
while (*(n2 + len2) != '\0')
len2++;
if (len1 >= size_r || len2 >= size_r)
return (0);
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry != 0; i--, j--)
{
int val1 = i >= 0 ? *(n1 + i) - '0' : 0;
int val2 = j >= 0 ? *(n2 + j) - '0' : 0;
sum = val1 + val2 + carry;
switch (sum)
{
case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
carry = 0;
break;
case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
carry = 1;
sum -= 10;
break;
default:
return (0);
}
if (i < 0 && j < 0 && carry != 0)
return (0);
if (r == NULL)
return (0);
if (i >= 0 || j >= 0 || carry != 0)
{
if (r - size_r >= r + i + j + 1)
return (0);
*(r + i + j + 1) = (sum % 10) + '0';
}}
for (i = 0, j = len1 + len2 - 1; i < j; i++, j--)
{
temp = *(r + i);
*(r + i) = *(r + j);
*(r + j) = temp;
}
*(r + len1 + len2) = '\0';
return (r);
}
