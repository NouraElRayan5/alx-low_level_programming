#include "main.h"
/**
 * clear_bit - clear the bits at the index
 * @n: number of index
 * @index: bot that will be cleared
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
return (-1);
}
if (*n & 1l << index)
{
*n ^= 1l << index;
}
return (1);
}
