#include "main.h"

/**
 * print_alphabet_x10 - to print alphabet x 10
 * Return: 0
 */

void	print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0 ; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}



}

