#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - to print the last digit
 * Return: 0
*/

int	main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	printf("Last digit of %i is %i \n ", n, x);
	if (x > 5)
	{
		printf("%i is greater than 5\n", n);
	}
	if (x == 0)
	{
		printf("%i is 0\n", n);
	}
	if (x < 6 && x != 0)
	{
		printf("%i is less than 6 and not 0\n", n);
	}
	return (0);
}
