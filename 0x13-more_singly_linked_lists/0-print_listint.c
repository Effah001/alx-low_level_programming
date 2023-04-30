#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *print_list - print all elements
 *@h: pointer to the first node
 *
 *Return: count
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	while (h != NULL)
	{	
	printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return(count);
}
