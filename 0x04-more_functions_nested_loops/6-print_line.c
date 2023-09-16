#include "main.h"

/**
 * print_line - to print a straght line in the terminal
 * Return: 0
 * @n: number to times character should must be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');

	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
		}
			_putchar(' ');
	}


}


