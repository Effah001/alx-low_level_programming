#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *find_listint_loop - prints a safe list
 *@head: pointer to the first node
 *Return: address of new node
 */

listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *prev = head;
	const listint_t *forw = head;

	while (forw && forw->next)
	{
		prev = prev->next;
		forw = forw->next->next;

	if (prev == forw)
	{
		prev = head;
		while (prev != forw)
		{
			prev = prev->next;
			forw = forw->next;
		}
		return ((listint_t *)prev);
	}
}
	return (NULL);
}
