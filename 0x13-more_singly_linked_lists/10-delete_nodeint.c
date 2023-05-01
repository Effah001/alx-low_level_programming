#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - delete at an index
 *@head: pointer to the first node
 *@index: index of the node we want to delete
 *Return: count
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *prev = NULL;

	for (i = 0; i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	if (prev == NULL)
	{
		*head = temp->next;
	}
	else
	{
		prev->next = temp->next;
	}
		free(temp);
		temp = NULL;

	return (1);
}
