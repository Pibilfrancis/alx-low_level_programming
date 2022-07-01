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
		printf("greater than 5");
	}
	else if (n == 0)
	{
		printf("0");
	}
	else if (n < 6 && n != 0)
	{
		printf("less than 6 not 0");
	}
	printf("\n")

	return (0);
}
