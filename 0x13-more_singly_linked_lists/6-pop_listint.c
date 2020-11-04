#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a linked list.
 *
 * @head: this is first node of the linked list.
 *
 * Return: x, x is the head nodes data.
 */
int pop_listint(listint_t **head)
{
	int x = 0;
	listint_t *aux;

	if (*head == NULL)
	{
		return (0);
	}
	x = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (x);
}
