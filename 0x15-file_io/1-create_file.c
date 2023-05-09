#include "main.h"
/**
 * create_file - Creates a new file.
 * @finmame: pointer to the name of the new file to be create.
 * @text_content: points to a char[] to write onto the file.
 * Return: -1 If the function fails.
 */
int create_file(const char *finmame, char *text_content)
{
int rd, wrt, nm = 0;
int ret = -1;
if (finmame == NULL)
return (-1);
if (text_content != NULL)
{
while (*(text_content + nm) != '\0')
nm++;
}
switch ((rd = open(finmame, O_CREAT | O_RDWR | O_TRUNC, 0600)))
{
case -1:
ret = -1;
break;
default:
switch ((wrt = write(rd, text_content, nm)))
{
case -1:
ret = -1;
break;
default:
ret = 1;
break;
}
close(rd);
break;
}
return (ret);
}
int append_text_to_file(const char *filename, char *text_content)
{
int rd, wrt, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;
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
