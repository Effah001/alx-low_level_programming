#include "main.h"
/**
* main - prints out it name
*
*/

int main(__attribute__((unused)) int argc, char *argv[])
{
	char *s = argv[0];

	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	}
	_putchar('\n');
	return (0);
}
