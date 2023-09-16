#include "lists.h"

/**
 * dlistint_len - prints the number of elements
 * of a list
 *
 * @h: points to head of linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;

	size_t count = 0;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
