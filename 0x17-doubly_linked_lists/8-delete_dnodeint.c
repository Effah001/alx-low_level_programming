#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a specific index
 *
 * @head: pointer to the head
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	unsigned int i = 0;
	
    while (current != NULL)
	{
		if (i == index)
	{
		current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
	}
		current = current->next;
		i++;
	}
    return (-1);
}
