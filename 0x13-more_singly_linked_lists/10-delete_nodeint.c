#include "lists.h"
/**
 * delete_nodeint_at_index - deleting the node that given index
 * @head: address of the 1st pointer
 * @index: index of the node that will be deleted
 * Return: 1 on success, -1 on fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *previous;
unsigned int i = 0;
if (!head || !*head)
{
return (-1);
}
if (!index)
{
node = *head;
*head = (*head)->next;
free(node);
return (1);
}
node = *head;
while (node)
{
if (i == index)
{
previous->next = node->next;
free(node);
return (1);
}
i++;
previous = node;
node = node->next;
}
return (-1);
}
