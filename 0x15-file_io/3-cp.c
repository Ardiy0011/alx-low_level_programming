#include "main.h"
/**
 * create_buffer - this allocates a buffer to the program.
 * @file: a afile that stores charaters.
 * Return: a pointer to the buffer.
 * Description: If the buffer cannot be allocated, exit code
 *  with a 99 error called returned.
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * BUFSIZE);
if (buffer == NULL)
{
printf( "Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}

/**
 * close_file - Closes a file through it's descriptor.
 * @fd: The repreents file descriptor to be closed.
 * Return: If the function fials exit w/ error 100.
 * Description: If isnt closed, exit w/ error 100.
 */
void close_file(int fd)
{
int c; 
c = close(fd);
switch (c)
{
case -1:
printf("Error: Can't close fd %d\n", fd);
exit(100);
default:
break;
}}


/**
* main - entry poin- Copies the contents of one file to andr.
* @argc: The number of arguments passed to the program.
* @argv: An array of pointers to the arguments.
* Return: 0 if successful
* else if it doesnt exist or
* cannot be read, exit w/ error 98. if it be created or
* written onto exit w/ 99 ,cannot be closed.
* else ultimately exit w/ erro  100
*/
int main(int argc, char *argv[])
{
int from, to, r, w;
char *buffer;

switch (argc)
{
case 1:
printf("Usage: cp file_from file_to\n");
exit(97);
case 2:
printf("Error: Missing destination file operand after '%s'\n", argv[1]);
exit(98);
case 3:
break;
default:
printf("Error: Too many arguments\n");
exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);

switch (from)
{
case -1:
printf("Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
default:
break;
}

to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

switch (to)
{
case -1:
printf("Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
default:
break;
}

r = read(from, buffer, BUFSIZE);

while (r > 0)
{
w = write(to, buffer, r);

switch (w)
{
case -1:
printf("Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
default:
break;
}

r = read(from, buffer, BUFSIZE);
}

free(buffer);

close_file(from);
close_file(to);

return (0);
}
