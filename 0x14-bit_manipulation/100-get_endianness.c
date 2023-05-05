#include "main.h"

/**
 * get_endianness - simple funct that Checks if big endian or little endian
 * Return: return 0 if big endian, 1 if little endian and 01 for error check
 */
int get_endianness(void)
{
int littleendian_value = 1;
char *endian = (char *)&littleendian_value;

switch (*endian)
{
case 0:
return (0);
case 1:
return (1);
default:
return (-1);
}
}
