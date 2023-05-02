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
	const listint_t *prev = NULL;
	int i = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		
		if (head < head->next && prev > head)
		{
			printf("[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}

		prev = head;
		head = head->next;
		}
		
		if (head == NULL)
			exit(98);
		
		return(i);
}
