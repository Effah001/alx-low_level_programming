#include "main.h"

char *_strncat(char *dest, char *src, int n)
<<<<<<< HEAD
	{
=======
        {
>>>>>>> aa4d3a2722bb2766eaa1feecce4489241adef6ca

	int i = 0;
	int j = 0;

	while ( dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';

	return dest;
	}
