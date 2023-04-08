#include "main.h"

/**
* main - prints out it name.
*@argc : arguments count
*@argv : argument vector
* Return: zero
*/

int main(int argc , char *argv[])
{
	char *s = argv[0];
	int i;
	for(i = 0; i <argc; i++)
	{
	while (*s != '\0')
	{
	_putchar(*s);
		s++;
	}
	_putchar('\n');
	}
		return 0;
}
