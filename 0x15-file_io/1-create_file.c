#include "holberton.h"

/**
* create_file - creates a file
* @filename: the name of the file
* @text_content: the content to be put in the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, length, f;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
if (fd == -1)
return (-1);
if (text_content == NULL)
return (1);
for (length = 0; text_content[length] != '\0'; length++)
;
f = write(fd, text_content, length);
if (f == -1 || f != length)
return (-1);
close(fd);
return (1);
}
