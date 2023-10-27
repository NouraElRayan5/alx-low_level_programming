#include "main.h"
/**
 * print_binary - prints a binary string
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
int bit = sizeof(n) * 8, result = 0;
while (bit)
{
if (n & 1l << --bit)
{
_putchar('1');
result++;
}
else if (result)
{
_putchar('0');
}
}
if (!result)
{
_putchar('0');
}
}
