#include "main.h"
/**
 * _isalpha - Enter point
 * Description: prints the uppercase alphabet
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
