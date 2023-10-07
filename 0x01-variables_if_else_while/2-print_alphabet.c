#include <stdio.h>

/**
 * main - Entry point
 * Description: print all alphabet in lower case
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch < 123)
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}
