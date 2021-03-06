#include "holberton.h"

/**
* read_textfile -function reads the file and print it to POSIX
* @filename: file to open
* @letters: the length of letters to read and print
*
* Return: the actual numbers letter
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int filen, filer, filew;
char *buff;

if (filename == NULL)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);
filen = open(filename, O_RDONLY);
if (filen == -1)
return (0);
filer = read(filen, buff, letters);
if (filer == -1)
return (0);
filew = write(STDOUT_FILENO, buff, filer);
if (filew == -1)
return (0);
free(buff);
close(filen);
return (filer);
}
