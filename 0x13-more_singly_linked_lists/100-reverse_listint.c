#include "lists.h"
/**
 * reverse_listint - reverse the integers of the list
 * @head: address of the 1st pointer
 * Return: address of the head
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *node = NULL, *nxt = NULL;
if (!head || !*head)
{
return (NULL);
}
node = *head;
*head = NULL;
while (node)
{
nxt = node->next;
node->next = *head;
*head = node;
node = nxt;
}
return (*head);
}
