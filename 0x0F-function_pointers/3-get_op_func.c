#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
*get_op_func - get the operation
*@s : string
*Return: integer
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].ops, s) == 0)
		return (ops[i].f);
		i++;
	}

	return (NULL);
}
