#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: first input
 * @f: second input
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
