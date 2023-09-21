#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 * Return: void.
*/

void reverse_array(int *a, int n)
{
int i, t;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n];
a[n] = t;
}
}
