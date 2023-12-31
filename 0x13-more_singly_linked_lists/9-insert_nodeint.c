#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: address of the 1st node
 * @idx: index to insert the new node
 * @n: value of node
 * Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *new = malloc(sizeof(listint_t));
unsigned int i = 0;
if (!head || !new)
{
return (NULL);
}
new->n = n;
new->next = NULL;
if (!idx)
{
new->next = *head;
*head = new;
return (new);
}
node = *head;
while (node)
{
if (i == idx - 1)
{
new->next = node->next;
node->next = new;
return (new);
}
i++;
node = node->next;
}
free(new);
return (NULL);
}
