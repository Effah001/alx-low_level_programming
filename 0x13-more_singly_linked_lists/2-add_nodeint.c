#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_nodeint - add a node to the beginning
 *@head: pointer to the first node
 *@n: integer
 *
 *Return: count
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;


	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
