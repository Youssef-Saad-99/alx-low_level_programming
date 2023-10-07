#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = '0';
	char ch1 = 'a';

	while (ch1 <= 'f')
	{
		while (ch <= 9)
		{
			putchar(ch);
			ch++;
		}
		putchar(ch1);
		ch1++;
	}
	putchar('\n');
	return (0);
}
