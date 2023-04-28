#include <stdio.h>

/**
* before - print before main
*Return: void
*/

void __attribute__ ((constructor)) before()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
