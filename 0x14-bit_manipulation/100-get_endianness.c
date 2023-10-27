#include "main.h"
/**
 * get_endianness - returns endianness of system
 * Return: 0 for big or 1 for small
 */

int get_endianness(void)
{
unsigned long int i = 1;
return (*(char *)&i);
}
