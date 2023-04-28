#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*free_list - frees list
*@head: pointer to the first element
*Return: vode
*/

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
