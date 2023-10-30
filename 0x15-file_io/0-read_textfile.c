#include "main.h"
/**
 * read_textfile - reading the text from the files and printing it
 * @filename: name of the file that will be read
 * @letters: numbers of bytes that will be read
 * Return: number of bytes that will be read and print it
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t byte;
char buf[READ_BUF_SIZE * 8];
if (!filename || !letters)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
byte = read(file, &buf[0], letters);
byte = write(STDOUT_FILENO, &buf[0], byte);
close(file);
return (byte);
}
