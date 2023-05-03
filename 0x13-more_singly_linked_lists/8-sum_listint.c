#include "lists.h"

/**
 * sum_listint - returns the sum of all the
 * nodes (n) of linked list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the nodes
 */
int sum_listint(listint_t *head)
{
int total = 0;

while (head != NULL)
{
total += head->n;
head = head->next;
}

return (total);
}

