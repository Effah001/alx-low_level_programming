#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - print all elements
 *@h: pointer to the first node
 *
 *Return: count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)

		printf("[%d] %s\n", 0, "(nill)");

	else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
	}
