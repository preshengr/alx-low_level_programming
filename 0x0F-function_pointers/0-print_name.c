#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - This function prints a name.
 * @name: The input name to be printed.
 * @f: function pointer.
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
