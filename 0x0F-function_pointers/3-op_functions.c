#include <stdio.h>
#include "3-calc.h"


/**
*op_add - addition
*@a : first parameter 
*@b : second parameter
*Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtraction
*@a : first parameter 
*@b : second parameter
*Return: sub
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplication
*@a : first parameter 
*@b : second parameter
*Return: mul
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - division
*@a : first parameter 
*@b : second parameter
*Return: div
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
*op_mod - modulo
*@a : first parameter 
*@b : second parameter
*Return: mod
*/

int op_mod(int a, int b)
{
	return (a % b);
}
