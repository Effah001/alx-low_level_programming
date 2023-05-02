#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *print_listint_safe - prints a safe list
 *@head: pointer to the first node
 *Return: address of new node
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	const listint_t *prev = head;
	const listint_t *forw = head;
	
	while (prev && forw && forw->next)
	{
		printf("[%p] %d\n", (void *)prev, prev->n);
		prev = prev->next;
		forw = forw->next->next;

		if (prev == forw)
		{
			printf("-> [%p] %d\n", (void *)prev, prev->n);
			i++;
			prev = prev->next;
			
			while (prev != forw)
		{
				printf("[%p] %d\n", (void *)prev, prev->n);
				prev =prev->next;
		}
		break;
	}
	else
	{
		i++;
	}
}
	return (i);
}
