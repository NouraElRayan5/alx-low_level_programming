#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0;
if (!s)
{
return (0);
}
while (*s++)
{
i++;
}
return (i);
}
/**
 * create_file - creating a file
 * @filename: name of the file that will be created
 * @text_content: text to write
 * Return: 1 if success 0 if failure
 */

int create_file(const char *filename, char *text_content)
{
int file;
ssize_t byte = 0, length = _strlen(text_content);
if (!filename)
{
return (-1);
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
if (length)
{
byte = write(file, text_content, length);
}
close(file);
return (byte == length ? 1 : -1);
}
