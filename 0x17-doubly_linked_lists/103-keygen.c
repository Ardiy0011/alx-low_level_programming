#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	unsigned int i, b;
	size_t len = strlen(argv[1]);
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	p[0] = l[(len ^ 59) & 63];

	unsigned int add = 0;
	for (i = 0; i < len; i++)
		add += argv[1][i];
	p[1] = l[(add ^ 79) & 63];

	unsigned int multiply = 1;
	for (i = 0; i < len; i++)
		multiply *= argv[1][i];
	p[2] = l[(multiply ^ 85) & 63];

	char max_char = argv[1][0];
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] >= max_char)
			max_char = argv[1][i];
	}
	srand(max_char ^ 14);
	p[3] = l[rand() & 63];

	unsigned int sum_of_squares = 0;
	for (i = 0; i < len; i++)
		sum_of_squares += argv[1][i] * argv[1][i];
	p[4] = l[(sum_of_squares ^ 239) & 63];

	unsigned int rand_val = 0;
	for (i = 0; i < argv[1][0]; i++)
		rand_val = rand();
	p[5] = l[(rand_val ^ 229) & 63];

	printf("%s\n", p);
	return (0);
}
