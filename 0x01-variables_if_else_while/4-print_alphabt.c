#include <stdio.h>
/**
 * main - to print letters with omitting one or two
 * Return: 0
 */

int	main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
