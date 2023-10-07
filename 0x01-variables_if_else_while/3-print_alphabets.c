#include <stdio.h>

/**
 * main - Entry point
 * Description: print all alphabet in lowercase and uppercase
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char ch1 = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (ch1 <= 'Z')
	{
		putchar(ch2);
		ch1++;
	}
	putchar('\n');
	return (0);
}
