#include <stdio.h>

/**
 * main - Entry point
 * Description: print all digit base 10 from 0
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");
	return (0);
}
