#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**

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

