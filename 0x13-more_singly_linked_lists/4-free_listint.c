#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_listint - print all elements
 *@head: pointer to the first node
 *
 *Return: count
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
