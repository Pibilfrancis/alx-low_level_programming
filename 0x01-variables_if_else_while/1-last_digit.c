#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print a text according number
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);

	if (n > 5)
	{
		printf("Last digit of 98 is 8 and is greater than 5");
	}
	else if (n == 0)
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0");
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of 980 is 0 and is 0");
	}
	printf("\n");

	return (0);
}
