#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*pop_listint - a function that deletes the head node
*@head: pointer to the list
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
	return (0);

	temp = *head;

	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}	
