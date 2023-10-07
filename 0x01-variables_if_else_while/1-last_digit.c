#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: positive or negative
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n[-1] > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n[-1]);
	}
	else if (n[-1] < 6 && n[-1] != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n[-1]);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n[-1]);
	}
	return (0);
}