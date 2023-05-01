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

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp = *head;

	if (*head == NULL)
	return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
	}

	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
	}
	
	if (temp == NULL)
		return (NULL);

	if (i == idx)
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
