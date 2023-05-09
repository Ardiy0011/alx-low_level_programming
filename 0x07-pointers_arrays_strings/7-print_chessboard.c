#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
int r, d;
for (r = 0; r < 8; r++)
{
for (d = 0; d < 8; d++)
{
printf("%c", a[r][d]);
}
printf("\n");
}}
