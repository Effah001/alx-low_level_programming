#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * an index
 *
 * @h: pointer to the head
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		dlistint_t *current = *h;
		unsigned int i = 0;

		while (i < idx - 1 && current != NULL)
		{
			current = current->next;
			i++;
		}

		if (current != NULL)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next != NULL)

			current->next->prev = new_node;
			current->next = new_node;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}

	return (new_node);
}
