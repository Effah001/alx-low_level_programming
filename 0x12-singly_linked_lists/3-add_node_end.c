#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - add a node to the beginning
* @str: pointer to the string
*@head: pointer to the first element
*Return: address of the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int x = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (*str != '\0')
	{
	str++;
	x++;
	}

	new_node->len = x;
	new_node->next = NULL;

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
