#include <stdio.h>
/**
 * main - to print numbers with , seperating them
 *
 * Return: 0
 */

int	main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		puchar(i + '0')
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
