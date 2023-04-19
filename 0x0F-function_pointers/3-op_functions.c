#include <stdio.h>
#include "3-calc.h"

/**
*@a : first parameter 
*@b : second parameter
*op_add - addition
*op_sub - subtraction
*op_mul - multiplication
*op_div - division
*op_mod - modulo
*/


int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}

