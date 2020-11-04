#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free a linked list.
 *
 * @head: this is a head of the list.
 *
 * Return: is not a neccessary.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		aux = *head;
		*head = (*head)->next;
		free(aux);

	}
	*head = NULL;
}
