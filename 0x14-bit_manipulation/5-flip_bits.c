#include "main.h"
/**
 * flip_bits - return number of bits that will be need to be flipped
 * @n: 1st number
 * @m: 2nd number
 * Return: number of flipped bits to convert numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m;
unsigned int number = 0;
while (xor)
{
if (xor & 1ul)
{
number++;
}
xor = xor >> 1;
}
return (number);
}
