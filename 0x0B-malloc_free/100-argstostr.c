#include "main.h"
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	int len = 0;
	int x;
	int y;
	int z = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return NULL;

	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y] != '\0'; y++)
	{
		len++;
        }
		len++; 
	}

	str = malloc(sizeof(char) * (len));
	
	if (str == NULL)
		return NULL;

	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y] != '\0'; y++)
	{
		str[z++] = av[x][y];
	}
		str[z++] = '\n';
	}

	str[z] = '\0';

		return str;
}
