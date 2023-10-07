#include <stdio.h>

/**
 * main - Entry point
 * Description: print all alphabet in lower case
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	int n = 122;

	while (ch <= 122)
	{
		putchar(ch);
		putchar('\n');
		ch++;
	}
	return (0);
}
