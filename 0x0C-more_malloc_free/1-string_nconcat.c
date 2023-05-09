#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i, j, len = 0, len1 = 0;

for (i = 0; s1 && s1[i]; i++)
len++;
for (j = 0; s2 && s2[j]; j++)
len1++;

if (n < len1)
s = malloc((len + n + 1) * sizeof(char));
else
s = malloc((len + len1 + 1) * sizeof(char));

if (!s)
return (NULL);

for (i = 0; s1 && s1[i]; i++)
s[i] = s1[i];

for (j = 0; s2 && s2[j] && j < n; j++, i++)
s[i] = s2[j];

s[i] = '\0';

return (s);
}
