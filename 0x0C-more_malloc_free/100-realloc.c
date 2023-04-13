#include <stdlib.h>
#include "main.h"

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	void* new_ptr;
	unsigned int i;
	char *dest;
	char *src;


	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
		return NULL;
	}

	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	if (new_size == old_size)
	{
		return ptr;
	}

	if (new_size > old_size)
	{
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return NULL;
	}
	src = ptr;
	dest = new_ptr;
	for (i = 0; i < old_size; i++)
	{
	dest[i] = src[i];
	}		
	
	return new_ptr;
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return NULL;
	}
	src = ptr;
        dest = new_ptr;
        for (i = 0; i < old_size; i++)
        {
        dest[i] = src[i];
        }
	return new_ptr;
}
