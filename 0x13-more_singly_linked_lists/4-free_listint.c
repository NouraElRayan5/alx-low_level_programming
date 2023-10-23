#include "lists.h"
/**
 * free_listint - set list of integers free
 * @head: the pointer of the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *node;
while (head)
{
node = head;
head = head->next;
free(node);
}
}
