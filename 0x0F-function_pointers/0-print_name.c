#include <stdio.h>
#include "function_pointers.h"

/**
*print_name - print the name
*@f : pointer to name
*@name : input name
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	return;
	(*f)(name);
}
