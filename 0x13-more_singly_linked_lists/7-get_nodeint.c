#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*get_nodeint_at_index - a function that deletes the head node
*@head: pointer to the list
*Return: integer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	
	for(i = 0; i < index; i++)
	{
		head = head->next;
	}
	
	return (i == index) ? head : NULL;
}
