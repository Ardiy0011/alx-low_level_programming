#include "main.h"

/**
 * append_text_to_file - thid plscrd text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * Return: -1 If the function fails or filename is NULL.
 *          -1 also If the file does not exist or lacks write
 *          permissions else returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int rd, wrt;
int len;
len = 0;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len] != '\0'; len++);
}
switch (rd = open(filename, O_WRONLY | O_APPEND))
{
case -1:
return (-1);

default:
break;
}
switch (wrt = write(rd, text_content, len))
{
case -1:
close(rd);
return (-1);

default:
break;
}
close(rd);
return (1);
}
