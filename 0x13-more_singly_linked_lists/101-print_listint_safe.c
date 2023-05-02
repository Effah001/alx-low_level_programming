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
	const listint_t *prev, *forw;
	int i = 0;

	while (head != NULL)
	{
		prev = prev->next;
		forw = forw->next->next;
		
		if (prev == forw)
		{
			printf("[%p] %d\n", (void *)prev, forw->n);
			i++;
			break;
		}

		printf("[%p] %d\n", (void *)prev, forw->n);
			i++;
		
		if (head && forw->next == NULL)
			i++;
			break;
		}
	}
		return(i);
}
