#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *a;
	int len = 0;

	if(str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
	len++;
	}
	
	a = (char *) malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return NULL;

	for(i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	a[len] = '\0';
		return (a);
}
