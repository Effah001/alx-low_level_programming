#include "main.h"
/**
* _strcpy -  copies a string pointed by str to dest
*@scr : pointer for thr initial string
*@dest : pointer to be copied to
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
	return (dest_start);
}
