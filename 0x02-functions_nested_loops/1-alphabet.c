#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: A function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Success)
*/

/*A function that prints the alphabet, in lowercase*/
void print_alphabet(void)
{
	/*A function that prints the alphabet, in lowercase*/
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
