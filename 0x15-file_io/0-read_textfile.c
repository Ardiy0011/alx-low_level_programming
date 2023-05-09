#include "main.h"
/**
 * read_textfile - Reads and prints  ana text file to POSIX stdout.
 * @filename: points to the name of the file.
 * @letters:  this represents the number of letters the function
 * should read and print.
 * Return: write if the function fails and 0 if success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a;
ssize_t rd;
ssize_t wrt;
char *buff;

if (filename == NULL)
return (0);

buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);

rd = open(filename, O_RDONLY);
a = read(rd, buff, letters);
wrt = write(STDOUT_FILENO, buff, rd);

if (a == -1 || rd == -1 || wrt == -1 || wrt < a)
{
free(buff);
return (0);
}

free(buff);
close(rd);

return (wrt);
}
