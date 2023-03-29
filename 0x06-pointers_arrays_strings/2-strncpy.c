#include <main.h>

char *_strcat (char *dest,char *src)
        {
	int i,j = 0;
	
	while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] ='\0';

	return dest;
	}
