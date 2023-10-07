#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabets without e and q
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' || ch != 'q')
		{
			putchar(ch);
		}
		else
		{
			continue;
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
