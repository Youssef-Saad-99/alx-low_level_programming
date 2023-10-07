#include <stdio.h>

/**
 * main - Entry point
 * Description: print all alphabet in lower case
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
