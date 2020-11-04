#include <stdio.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list_t list
 *
 * @h: this is a pointer to the head of the list.
 *
 * Return: i, i is the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
