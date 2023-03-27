#include "main.h"
/**
* reset_to_98 :  resets the value of an integer pointer to 98
*
*/

char *_strcpy(char *dest, char *src)
	{
	char *dest_start = dest;
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
		*dest = '\0';
	return dest_start;
}
