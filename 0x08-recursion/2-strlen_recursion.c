#include "main.h"

/**
 * _strlen_recursion -  function that returns the length of a string.
 *
 * @s: pointer input
 *
 * Return: Length of string
*/

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
