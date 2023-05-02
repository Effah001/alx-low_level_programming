#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - insert a node at a given index
 *@head: pointer to the first node
 *@n: integer
 *@idx: index to be inserted
 *Return: address of new node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *forw = *head;

	while (*head != NULL)
	{
		forw = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = forw;
	}
		*head = prev;
	return(*head);
}
