#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_listint_safe - prints a safe list
 *@h: pointer to the first node
 *Return: address of new node
 */

size_t free_listint_safe(listint_t **h)
{
	int i = 0;
	listint_t *temp = *h;
	int check[20000] = {0};
	listint_t *next;

	while (temp)
	{
		if (check[(size_t)temp % 20000])
		{
			*h = NULL;
			return (i);
		}

		(check[(size_t)temp % 20000]) = 1;

		next = temp->next;
		free(temp);
		temp = next;

		i++;
	}
	*h = NULL;
	return (i);
}
