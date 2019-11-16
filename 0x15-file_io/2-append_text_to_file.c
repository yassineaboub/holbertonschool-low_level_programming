#include "holberton.h"

/**
* append_text_to_file - Function that appends text to the file
*@filename: file name
*@text_content: text that write in the file
*Return: 1 success,-1 failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, l, c;
if (filename == NULL)
return (-1);

fd = open(filename, O_RDWR | O_APPEND);
if (fd == -1)
return (-1);

if (text_content == NULL)
return (1);

while (text_content[c] != '\0')
c++;

l = write(fd, text_content, c);

if (l == -1)
return (-1);

return (1);
}
