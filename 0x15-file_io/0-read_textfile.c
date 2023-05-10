#include "main.h"
/**
 * read_textfile - this fucnt reads the file and prints POSIX standrd-O
 * @filename: points to the filename
 * @letters: number of letters to  to be read an displayed
 * Return: actual number of letters read and printed else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t br, bw;
char *buffer;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(letters * sizeof(filename));
if (!buffer)
{
close(fd);
return (0);
}
br = read(fd, buffer, letters);
if (br == -1)
{
free(buffer);
close(fd);
return (0);
}
bw = write(STDOUT_FILENO, buffer, br);
if (bw == -1 || bw != br)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bw);
}
