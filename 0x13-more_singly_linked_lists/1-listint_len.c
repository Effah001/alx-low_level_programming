#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *listint_len - print all elements
 *@h: pointer to the first node
 *
 *Return: count
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
