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
	const listint_t *prev;
	const listint_t *forw;
	prev = head;
	forw = head->next;
		
	int i = 0;
	int condition = head < head->next ? 1 : 0;
	
	if (head != NULL)
		printf("[%p] %d\n", (void *)prev, prev->n);
	
	while (prev != NULL)
	{
		if (condition == 1)
		{
			if (forw < prev)
			{
				printf("[%p] %d\n", (void *)forw, forw->n);
				exit(98);
			}
		}

		else
		{
			if (forw > prev)
			{
				printf("[%p] %d\n", (void *)forw, forw->n);
				exit(98);
			}
		}
		
		i++;
		printf("[%p] %d\n", (void *)forw, forw->n);
		prev = forw;
		if (prev->next == NULL)
		{
		break;
		}
		forw = forw->next;
		}
			return(i);
}
