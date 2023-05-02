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
	const listint_t *temp = head;
	int visited[10000] = {0};
	
	while (temp)
	{
		

		if (visited[(size_t)temp % 10000])
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		{
		(visited[(size_t)temp % 10000]) = 1;
		printf("[%p] %d\n", (void *)temp, temp->n);
		
		temp = temp->next;

	}
	return (i);
}
