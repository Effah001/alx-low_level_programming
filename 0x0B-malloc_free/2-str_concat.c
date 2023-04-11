#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
	{
	int i = 0;
	int j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		i++ ;
	}

	while (s2[j] != '\0')
	{
		j++ ;
	}

s1 = (char *) malloc(sizeof(char) * (i + j + 1));

	if (s1 == NULL)
		return NULL;

	while (s2[j] != '\0')
	{
	s1[i] = s2[j];
	j++;
	i++;
	}

	s1[i] = '\0';

	return s1;
	}

