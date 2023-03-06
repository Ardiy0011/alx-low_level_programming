#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int r, d;

	for (r = 0; a[r][7]; r++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[r][d]);

		_putchar('\n');
	}
}
