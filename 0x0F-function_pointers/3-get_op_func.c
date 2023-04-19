#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
#include "3-calc.h"

/**
*get_op_func - get the operation
*@s : string
*@op_funcs : funtion pointer
*/

int (*get_op_func(char *s))(int, int)
{


	int i = !strcmp(s, " + ") * 1 +!strcmp(s, "-") * 2 + !strcmp(s, "*") * 3 +
	!strcmp(s, "/") * 4 + !strcmp(s, "%") * 5;
	int (*op_funcs[6])(int, int) = {op_add, op_sub, op_mul,  op_div, op_mod};
	return (i ? op_funcs[i - 1] : NULL);
}
