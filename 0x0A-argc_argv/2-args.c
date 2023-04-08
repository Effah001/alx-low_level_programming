#include "main.h"
#include <stdio.h>

/**
* main - prints out it name.
*@argc : arguments count
*@argv : argument vector
* Return: zero
*/

int main(int argc, char *argv[])
{
	int x;
	
	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argv[x]);
	}
	return (0);
}
