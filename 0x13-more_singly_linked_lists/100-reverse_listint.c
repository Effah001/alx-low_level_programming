#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *reverse_listint - reverse the linked list
 *@head: pointer to the first node
 *Return: address of new node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *forw = *head;

	while (*head != NULL)
	{
		forw = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = forw;
	}
		*head = prev;
	return (*head);
}
