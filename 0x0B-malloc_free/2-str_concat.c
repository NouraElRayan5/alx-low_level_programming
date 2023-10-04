#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - function to find length of string
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
{
;
}
return (size);
}
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
*/
char *str_concat(char *s1, char *s2)
{
char *m;
int i, ci, bi;
if (s1 == NULL)
{
s1 = "\0";
}
if (s2 == NULL)
{
s2 = "\0";
}
bi = _strlen(s1);
ci = _strlen(s2);
m = malloc((bi + ci)*sizeof(char) + 1);
if (m == 0)
{
return (0);
}
for (i = 0; i <= bi + ci; i++)
{
if (i < bi)
{
m[i] = s1[i];
}
else
{
m[i] = s2[i - bi];
}
}
m[i] = '\0';
return (m);
}
