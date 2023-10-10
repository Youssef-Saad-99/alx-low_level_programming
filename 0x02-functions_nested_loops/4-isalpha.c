#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 *
 * Description: A function that checks for alphabetic character
 *
 * @c: takes input from other functions
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
