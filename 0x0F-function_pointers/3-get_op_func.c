#include <stdio.h>
#include "function_pointers.h"
#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{


	int i = !_strcmp(s, "+") * 1 +!_strcmp(s, "-") * 2 + !_strcmp(s, "*") * 3 + !_strcmp(s, "/") * 4 + !_strcmp(s, "%") * 5;
	int (*op_funcs[5])(int, int) = {op_add, op_sub, op_mul,  op_div, op_mod};
	return i ? op_funcs[i] : NULL;
}

/**
* _strcmp - compare to strings
*@s1: pointer to a character
*@s2: pointer to a character
* Return: nothing
*/

	int _strcmp(char *s1, char *s2)
	{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	i++;
	}
	if (s1[i] == s2[i])
	{
	return (0);
	}
	else if (s1[i] > s2[i])
	{
		return (1);
	}
	else
		return (-1);
}

