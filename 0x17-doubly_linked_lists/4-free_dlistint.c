#include "lists.h"

  /**
 *free_listint2 - free the list
 *@head: pointer to the list
 *
 *Return: none
 */
 
void free_dlistint(dlistint_t *head){ 
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
		*head = NULL;
}
