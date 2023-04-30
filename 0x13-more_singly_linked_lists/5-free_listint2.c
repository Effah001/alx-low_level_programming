#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
		*head = NULL;
}
