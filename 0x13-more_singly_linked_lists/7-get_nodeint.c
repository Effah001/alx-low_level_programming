#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*get_nodeint_at_index - a function that get a node at an index
*@head: pointer to the list
*@index: index to be searched
*Return: integer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
		if (i == index)
	{
		return (head);
	}
		return (NULL);
}
