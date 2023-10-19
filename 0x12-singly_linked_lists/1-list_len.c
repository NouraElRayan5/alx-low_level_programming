#include <stdlib.h>
#include "lists.h"
/**
 *list_len - returns numbers of elements in a linked list
 *@h: pointer to the list
 *Return: numbers of elements in the pointer
*/

size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
