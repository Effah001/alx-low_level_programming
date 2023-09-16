#include "lists.h"

  /**
 *free_dlistint - free the list
 *@head: pointer to the list
 *
 *Return: none
 */

void free_dlistint(dlistint_t *head)
{ 
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = (head)->next;
		free(temp);
	}
}
