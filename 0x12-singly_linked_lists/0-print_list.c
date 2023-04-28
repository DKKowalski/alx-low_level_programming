/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

 while (h != NULL)
{
printf("[%lu] ", h->len);
if (h->str != NULL)
	printf("%s\n", h->str);
else
	printf("(nil)\n");
h = h->next;
count++;
}

return (count);
}
