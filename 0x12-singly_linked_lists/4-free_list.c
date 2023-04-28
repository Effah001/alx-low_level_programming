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
	if (head == NULL)
	{
		return;
	}
	
	free_list(head->next);
		free(head->str);
		free(head);

}
