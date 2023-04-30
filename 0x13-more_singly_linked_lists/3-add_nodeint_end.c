#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_nodeint_end - print all elements
 *@head: pointer to the first node
 *@n: integer
 *Return: count
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
		temp->next = new_node;
	}
	return (*head);
}
