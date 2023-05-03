#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node @ position
 * @head: A pointer to the pointer of
 * the head of the linked list
 * @idx: The index at which to insert the new node
 * @n: The value to be stored in the new node
 *
 * Return: On success, address of the new node
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node = NULL, *temp = NULL;
unsigned int i = 0;

if (!head)
	return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
	return (NULL);

new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

temp = *head;
while (temp && i < idx - 1)
{
temp = temp->next;
i++;
}

if (!temp)
{
free(new_node);
return (NULL);
}

new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}

