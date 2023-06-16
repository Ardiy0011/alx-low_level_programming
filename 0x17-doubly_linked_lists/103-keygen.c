#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key using  crackme5
 * @argc: number of arguments to pass
 * @argv: arguments passed to main
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, b;
	size_t length, sum;
	char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlength(argv[1]);
	p[0] = l[(length ^ 59) & 63];
	for (i = 0, sum = 0; i < length; i++)
		sum += argv[1][i];
	p[1] = l[(sum ^ 79) & 63];
	for (i = 0, b = 1; i < length; i++)
		b *= argv[1][i];
	p[2] = l[(b ^ 85) & 63];
	for (b = argv[1][0], i = 0; i < length; i++)
		if ((char)b <= argv[1][i])
			b = argv[1][i];
	srand(b ^ 14);
	p[3] = l[rand() & 63];
	for (b = 0, i = 0; i < length; i++)
		b += argv[1][i] * argv[1][i];
	p[4] = l[(b ^ 239) & 63];
	for (b = 0, i = 0; (char)i < argv[1][0]; i++)
		b = rand();
	p[5] = l[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
