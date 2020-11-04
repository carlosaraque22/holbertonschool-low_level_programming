#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a linked list.
 *
 * @head: this is a head of the linked list.
 *
 * Return: is not a neccessary.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
}
