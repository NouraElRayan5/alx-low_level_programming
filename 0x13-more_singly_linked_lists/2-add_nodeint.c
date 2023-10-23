#include "lists.h"
/**
 * add_nodeint - adding a node to the top
 * @head: poiter of the 1st node
 * @n: value of the new node
 * Return: pointer of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (!head || !new)
{
return (NULL);
}
new->next = NULL;
new->n = n;
if (*head)
{
new->next = *head;
}
*head = new;
return (new);
}
