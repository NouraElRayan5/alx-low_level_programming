#include "lists.h"
/**
 * sum_listint - returning the sum of the data
 * @head: pointer of the 1st node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
