#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * at a given index.
 * @head: A pointer to a pointer
 * to the 1st node in the listint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if the deletion was successful, else -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	next = (*head)->next;

	for (i = 1; next != NULL && i < index; i++)
	{
		prev = next;
		next = next->next;
	}

	if (i != index)
		return (-1);

	temp = next;
	prev->next = next->next;
	free(temp);

	return (1);
}

