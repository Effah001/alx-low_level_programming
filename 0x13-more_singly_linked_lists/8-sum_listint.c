#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_nodeint_end - print all elements
 *@head: pointer to the first node
 *@n: integer
 *Return: count
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int x;

	if ( head == NULL)
		return(0);

	while (head->next != NULL)
	{
	head = head->next;
	x = head->n;
	sum = sum + x;
	}
	
	return(sum);
}
