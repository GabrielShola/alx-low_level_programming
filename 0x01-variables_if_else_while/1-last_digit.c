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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{	printf("Last digit of %i is %i and is greater than 5", n, m);

	}
	else if (m == 0)
	{
		printf("Last digit of %i is %i and is 0", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %i is %i and is less than 0 and not 6", n, m);
	}

	printf("\n");
	return (0);

}
