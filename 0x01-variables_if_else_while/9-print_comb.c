#include <stdio.h>
/**
 * main - to print numbers with , seperating them
 *
 * Return: 0
 */

int	main(void)
{
	char i;

	for (i = 0 ; i < 10 ; i++)

		if (i == 9)
			putchar(i + '0');
		else
		{	putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	return (0);
}
