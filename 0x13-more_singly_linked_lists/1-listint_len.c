#include "lists.h"
/**
 * listint_len - to print the linked list
 * @h: pointer of the 1st node
 * Return: the size of the list
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
