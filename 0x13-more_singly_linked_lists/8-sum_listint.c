#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *sum_listint - add  all the nodes
 *@head: pointer to the first node
 *
 *Return: count
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int x;

	if (head == NULL)
		return (0);
	sum = head->n;

	while (head->next != NULL)
	{
	head = head->next;
	x = head->n;
	sum = sum + x;
	}

	return (sum);
}
