#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *a;

	if (size == 0 || nmemb == 0)

		return (NULL);

	a = calloc (size, nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	return (a);
}
