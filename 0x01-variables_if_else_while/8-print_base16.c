#include <stdio.h>
/**
 * main - to print hexadecimal
 *
 * Return: 0
 *
 */

int main(void)
{
	char i;

	for (i = 0; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	for (i = 'a' ; i < 'g'; i++)
		putchar(i);
	putchar('\n');
	return (0);

}

