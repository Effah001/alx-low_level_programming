#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *reverse_listint - reverse the linked list
 *@head: pointer to the first node
 *Return: address of new node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev = head;
	const listint_t *forw = head;
	int i = 0;

	while (prev != NULL && forw->next != NULL)
	{
		printf("[%p] %d\n", (void *)prev, prev->n);
		i++;
		
		prev = prev->next;
		forw = forw->next->next;
		
		if (prev == forw)
		{
			exit(98);
		}
	}
	
	if (prev != NULL)
	{
		printf("[%p] %d\n", (void *)prev, forw->n);
		i++;
	}
	return(i);
}
