#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* list_len - a function that returns the number of elements
* @h: pointer to the first node 
* @count: determine the number of nodes
* @next: points to the next node
*
* Return : count
*/

size_t list_len(const list_t *h)
{
    int count = 0;
    while (h != NULL)
    {
        count++;
        h = h->next
    }
    return (count)
}